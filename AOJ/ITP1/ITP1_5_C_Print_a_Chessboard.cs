using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                int[] A = Console.ReadLine().Split().Select(int.Parse).ToArray();
                int H = A[0], W = A[1];
                if (H == 0 && W == 0) break;
                for (int i = 0; i < H; i++)
                {
                    for (int j = 0; j < W; j++)
                    {
                        if ((i + j) % 2 == 0)
                        {
                            Write("#");
                        }
                        else
                        {
                            Write(".");
                        }
                    }
                    WriteLine();
                }
                WriteLine();
            }
        }
    }
}