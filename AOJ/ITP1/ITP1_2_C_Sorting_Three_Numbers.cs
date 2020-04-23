using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var a = Console.ReadLine().Split().Select(int.Parse).ToArray().OrderBy(x => x);
            Console.WriteLine(string.Join(" ", a));
        }
    }
}
