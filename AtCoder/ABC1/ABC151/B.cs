using System;
using System.Linq;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        var s = Console.ReadLine().Split().Select(int.Parse).Sum();
        var d = a[0] * a[2] - s;
        Console.WriteLine(d > a[1] ? -1 : d > 0 ? d : 0);
    }
}
