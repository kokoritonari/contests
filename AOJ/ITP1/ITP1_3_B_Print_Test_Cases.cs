using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            for (var i = 1; true; i++)
            {
                int x = int.Parse(Console.ReadLine());
                if (x == 0) break;
                Console.WriteLine("Case " + i + ": " + x);
            }
        }
    }
}