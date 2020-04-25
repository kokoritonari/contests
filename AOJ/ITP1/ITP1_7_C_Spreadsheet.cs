using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var a = ReadLine().Split().Select(int.Parse).ToArray();
            int r = a[0], c = a[1];
            int[,] sheet = new int[r + 1, c + 1];
            for (int ri = 0; ri < r; ri++)
            {
                var tmp = ReadLine().Split().Select(int.Parse).ToArray();
                for (int ci = 0; ci < c; ci++)
                {
                    sheet[ri, ci] = tmp[ci];
                    sheet[r, ci] += tmp[ci];
                }
            }

            int[] rowsum = new int[r + 1];
            for (int ci = 0; ci < c; ci++)
            {
                for (int ri = 0; ri < r + 1; ri++)
                {
                    sheet[ri, c] += sheet[ri, ci];
                }
            }

            for (int i = 0; i < r + 1; i++)
            {
                for (int j = 0; j < c + 1; j++)
                {
                    if (j != 0) Write(" ");
                    Write(sheet[i, j]);
                }
                WriteLine();
            }
        }
    }
}