using System;
using System.Collections.Generic;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int W = a[0];
            int H = a[1];
            int x = a[2];
            int y = a[3];
            int r = a[4];
            Console.WriteLine(x < r || W - r < x || y < r || H - r < y ? "No" : "Yes");
        }
    }
}
