using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var tmp = ReadLine().Split().Select(int.Parse).ToArray();
            int n = tmp[0], m = tmp[1], l = tmp[2];
            long[,] A = new long[n, m], B = new long[m, l];
            long[,] C = new long[n, l];

            for (int ni = 0; ni < n; ni++)
            {
                tmp = ReadLine().Split().Select(int.Parse).ToArray();
                for (int mi = 0; mi < m; mi++)
                {
                    A[ni, mi] = tmp[mi];
                }
            }

            for (int mi = 0; mi < m; mi++)
            {
                tmp = ReadLine().Split().Select(int.Parse).ToArray();
                for (int li = 0; li < l; li++)
                {
                    B[mi, li] = tmp[li];
                }
            }

            for (int ni = 0; ni < n; ni++)
            {
                for (int li = 0; li < l; li++)
                {
                    long sum = 0;
                    for (int mi = 0; mi < m; mi++)
                    {
                        sum += A[ni, mi] * B[mi, li];
                    }
                    C[ni, li] = sum;
                }
            }

            for (int ni = 0; ni < n; ni++)
            {
                for (int li = 0; li < l; li++)
                {
                    if (li != 0) Write(" ");
                    Write(C[ni, li]);
                }
                WriteLine();
            }
        }
    }
}