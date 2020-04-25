using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            int[,,] dorm = new int[4, 3, 10];

            int n = int.Parse(ReadLine());
            for (int i = 0; i < n; i++)
            {
                var a = ReadLine().Split().Select(int.Parse).ToArray();
                dorm[a[0] - 1, a[1] - 1, a[2] - 1] += a[3];
            }

            for (int bi = 0; bi < 4; bi++)
            {
                for (int fi = 0; fi < 3; fi++)
                {
                    for (int ri = 0; ri < 10; ri++)
                    {
                        Write(" " + dorm[bi, fi, ri]);
                    }
                    WriteLine();
                }

                if (bi == 3) break;

                for (int i = 0; i < 20; i++)
                {
                    Write("#");
                }
                WriteLine();
            }
        }
    }
}