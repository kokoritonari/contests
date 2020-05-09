using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var c = ReadLine().Split().Select(double.Parse).ToArray();
            WriteLine($"{Math.Sqrt(Math.Pow(c[3] - c[1], 2) + Math.Pow(c[2] - c[0], 2)):F5}");
        }
    }
}