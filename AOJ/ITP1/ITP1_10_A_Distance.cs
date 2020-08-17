using System;
using System.Linq;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split().Select(double.Parse).ToList();
        Console.WriteLine(Math.Sqrt(Math.Pow(a[3] - a[1], 2) + Math.Pow(a[2] - a[0], 2)));
    }
}
