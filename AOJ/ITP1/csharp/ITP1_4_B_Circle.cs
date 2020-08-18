using System;
using static System.Console;

class P
{
    static void Main()
    {
        var r = double.Parse(ReadLine());
        WriteLine($"{r * r * Math.PI :f5} {2 * r * Math.PI :f5}");
    }
}
