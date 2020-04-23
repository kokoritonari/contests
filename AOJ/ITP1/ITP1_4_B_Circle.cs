using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var r = double.Parse(Console.ReadLine());
            Console.WriteLine("{0} {1}", r * r * Math.PI, 2 * r * Math.PI);
        }
    }
}