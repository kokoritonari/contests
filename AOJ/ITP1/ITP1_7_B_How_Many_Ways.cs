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
                var a = ReadLine().Split().Select(int.Parse).ToArray();
                int n = a[0], x = a[1];
                if (n == 0 && x == 0) break;
                int ans = 0;
                for (int i = 1; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        for (int k = j + 1; k <= n; k++)
                        {
                            int s = i + j + k;
                            if (s > x) break;
                            if (s == x) ans++;
                        }
                    }
                }
                WriteLine(ans);
            }
        }
    }
}