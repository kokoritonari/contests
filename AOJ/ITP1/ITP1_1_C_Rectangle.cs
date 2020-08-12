using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        // WriteLine("{0} {1}", a.Aggregate((now, next) => now * next), a.Sum() * 2);
        WriteLine($"{a[0] * a[1]} {a.Sum() * 2}");
    }
}
