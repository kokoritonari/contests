using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var data = ReadLine().Split().Select(int.Parse).ToArray();
            var dice = new Dice(data);
            var op = ReadLine();
            foreach (var dir in op)
            {
                dice.RollDice(dir);
            }
            WriteLine(dice.GetNumber());
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

        public int GetNumber()
        {
            return Data[0];
        }

    }
}