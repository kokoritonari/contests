using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        ReadLine();
        var a = ReadLine().Split().Select(decimal.Parse);
        WriteLine($"{a.Min()} {a.Max()} {a.Sum()}");
    }
}
