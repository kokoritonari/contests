using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var w = Console.ReadLine().ToLower();
            var res = 0;
            while (true)
            {
                var t = Console.ReadLine();
                if (t == "END_OF_TEXT") break;
                res += t.Split().Select(s => s.ToLower()).Count(s => s == w);
            }
            Console.WriteLine(res);
        }
    }
}