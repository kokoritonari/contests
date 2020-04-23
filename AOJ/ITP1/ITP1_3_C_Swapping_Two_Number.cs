using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
                if (a[0] == 0 && a[1] == 0) break;
                Console.WriteLine(string.Join(" ", a.OrderBy(x => x)));
            }
        }
    }
}