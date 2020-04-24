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
                for (int i = 0; i < W; i++)
                {
                    Write("#");
                }
                WriteLine();

                for (int i = 0; i < H - 2; i++)
                {
                    Write("#");
                    for (int j = 0; j < W - 2; j++)
                    {
                        Write(".");
                    }
                    WriteLine("#");
                }
                for (int i = 0; i < W; i++)
                {
                    Write("#");
                }
                WriteLine('\n');
            }
        }
    }
}