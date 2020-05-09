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
                var n = int.Parse(ReadLine());
                if (n == 0) break;
                var s = ReadLine().Split().Select(int.Parse).ToArray();
                var m = (double) s.Sum() / s.Count();
                WriteLine($"{Math.Sqrt(s.Select(x => Math.Pow(x - m, 2)).Sum() / s.Count()):F5}");
            }
        }
    }
}