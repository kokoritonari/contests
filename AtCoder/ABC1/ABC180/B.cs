using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        var a = Console.ReadLine().Split().Select(x => Math.Abs(long.Parse(x)));
        Console.WriteLine($"{a.Sum()}\n{Math.Sqrt(a.Select(x => x * x).Sum())}\n{a.Max()}");
    }
}
