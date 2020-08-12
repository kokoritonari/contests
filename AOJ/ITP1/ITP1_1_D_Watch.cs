using System;
using static System.Console;

class P
{
    static void Main()
    {
        var s = int.Parse(ReadLine());
        WriteLine($"{s / 3600}:{s / 60 % 60}:{s % 60}");
    }
}
