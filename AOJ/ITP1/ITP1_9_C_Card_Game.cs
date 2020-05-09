using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(ReadLine());
            var res = new int[3];
            for (int i = 0; i < n; i++)
            {
                var c = ReadLine().Split();
                if (c[0] == c[1]) res = res.Select(x => x + 1).ToArray();
                else res[Math.Max((int)(c[1].CompareTo(c[0])), 0)] += 3;
            }
            Console.WriteLine($"{res[0]} {res[1]}");
        }
    }
}