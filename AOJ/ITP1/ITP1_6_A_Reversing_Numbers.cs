using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            ReadLine();
            var a = ReadLine().Split().Select(int.Parse).ToArray().Reverse();
            WriteLine(string.Join(" ", a));
        }
    }
}