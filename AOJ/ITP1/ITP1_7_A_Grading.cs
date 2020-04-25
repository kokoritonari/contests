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
                int m = a[0], f = a[1], r = a[2], mf = a[0] + a[1];
                if (m == ~0 && f == ~0 && r == ~0) break;
                if (m == ~0 || f == ~0)
                {
                    WriteLine("F");
                }
                else if (mf >= 80)
                {
                    WriteLine("A");
                }
                else if (mf >= 65)
                {
                    WriteLine("B");
                }
                else if (mf >= 50 || r >= 50)
                {
                    WriteLine("C");
                }
                else if (mf >= 30)
                {
                    WriteLine("D");
                }
                else
                {
                    WriteLine("F");
                }
            }
        }
    }
}