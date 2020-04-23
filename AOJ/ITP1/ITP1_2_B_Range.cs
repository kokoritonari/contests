using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            Console.WriteLine(a[0] < a[1] && a[1] < a[2] ? "Yes" : "No");
        }
    }
}
