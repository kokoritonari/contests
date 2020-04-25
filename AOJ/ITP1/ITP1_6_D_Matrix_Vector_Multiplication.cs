using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var nm = ReadLine().Split().Select(int.Parse).ToArray();
            int n = nm[0], m = nm[1];
            int[,] matrix = new int[n, m];
            for (int i = 0; i < n; i++)
            {
                int[] a = ReadLine().Split().Select(int.Parse).ToArray();
                for (int j = 0; j < m; j++)
                {
                    matrix[i, j] = a[j];
                }
            }
            int[] vector = new int[m];
            for (int i = 0; i < m; i++)
            {
                vector[i] = int.Parse(ReadLine());
            }

            int[] ans = new int[n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    ans[i] += matrix[i, j] * vector[j];
                }
            }

            for (int i = 0; i < n; i++)
            {
                WriteLine(ans[i]);
            }
        }
    }
}