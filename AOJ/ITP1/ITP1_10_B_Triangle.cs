using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var ia = ReadLine().Split().Select(int.Parse).ToArray();
            int a = ia[0], b = ia[1], C = ia[2];
            double sinc = Math.Sin(C * Math.PI / 180);
            double cosc = Math.Cos(C * Math.PI / 180);
            double c = Math.Sqrt(a * a + b * b - 2 * a * b * cosc);
            double s = a * b * sinc / 2;
            double l = a + b + c;
            double h = b * sinc;
            WriteLine($"{s:F5}\n{l:F5}\n{h:F5}");
        }
    }
}