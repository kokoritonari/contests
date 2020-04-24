using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(ReadLine());
            for (int i = 1; i <= n; i++)
            {
                int x = i;
                if (x % 3 == 0)
                {
                    Write(" " + i);
                    continue;
                }

                do
                {
                    if (x % 10 == 3)
                    {
                        Write(" " + i);
                        break;
                    }
                    x /= 10;
                } while (x > 0);
            }
            WriteLine();
        }
    }
}