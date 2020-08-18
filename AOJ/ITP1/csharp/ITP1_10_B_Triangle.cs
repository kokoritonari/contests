using System;
using System.Linq;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split().Select(int.Parse).ToList();
        double r = a[2] * Math.PI / 180, s = Math.Sin(r);
        Console.WriteLine($"{a[0] * a[1] * s / 2}\n{Math.Sqrt(a[0] * a[0] + a[1] * a[1] - 2 * a[0] * a[1] * Math.Cos(r)) + a[0] + a[1]}\n{s * a[1]}");
    }
}
