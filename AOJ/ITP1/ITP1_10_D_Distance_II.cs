using System;
using System.Linq;
using static System.Console;
using static System.Math;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(ReadLine());
            var x = ReadLine().Split().Select(int.Parse).ToArray();
            var y = ReadLine().Split().Select(int.Parse).ToArray();
            foreach (var p in new int[] { 1, 2, 3 })
            {
                WriteLine($"{Pow(x.Zip(y, (first, second) => Pow(Abs(first - second), p)).Sum(), 1.0 / p):F6}");
            }
            WriteLine($"{x.Zip(y, (first, second) => Abs(first - second)).Max():F6}");
        }
    }
}