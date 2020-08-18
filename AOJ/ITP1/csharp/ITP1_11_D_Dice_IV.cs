using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(ReadLine());
            int[][] data = new int[n][];
            for (int i = 0; i < n; i++)
            {
                data[i] = ReadLine().Split().Select(int.Parse).ToArray();
            }

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    var dice = new Dice(data[i]);
                    int top = data[j][0], forward = data[j][1];
                    SearchNumber(dice, top, forward);
                    if (dice.Data.SequenceEqual(data[j]))
                    {
                        WriteLine("No");
                        return;
                    }
                }
            }

            WriteLine("Yes");
        }

        public static void SearchNumber(Dice dice, int top, int forward)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (dice.GetNumber() == top && dice.GetNumber(1) == forward) return;
                    if (dice.GetNumber(1) == forward) break;
                    dice.RollDice('N');
                }
                dice.RollDice('W');
            }
        }
    }

    class Dice
    {
        public int[] Data { get; set; }
        public int X { get; set; } = 0;
        public int Y { get; set; } = 0;
        public Dice(int[] data)
        {
            Data = data;
        }

        public void RollDice(char c)
        {
            // 0: Top
            // 5: Bottom
            // 1: Forward
            // 4: Back
            // 3: Left
            // 2: Right
            int tmp;
            switch (c)
            {
                case 'N': { tmp = Data[0]; Data[0] = Data[1]; Data[1] = Data[5]; Data[5] = Data[4]; Data[4] = tmp; break; }
                case 'S': { tmp = Data[0]; Data[0] = Data[4]; Data[4] = Data[5]; Data[5] = Data[1]; Data[1] = tmp; break; }
                case 'W': { tmp = Data[0]; Data[0] = Data[2]; Data[2] = Data[5]; Data[5] = Data[3]; Data[3] = tmp; break; }
                case 'E': { tmp = Data[0]; Data[0] = Data[3]; Data[3] = Data[5]; Data[5] = Data[2]; Data[2] = tmp; break; }
                default: break;
            }
        }

        public int GetNumber(int number = 0)
        {
            return Data[number];
        }

    }
}