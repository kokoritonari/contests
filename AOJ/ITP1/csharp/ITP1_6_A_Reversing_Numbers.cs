using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        ReadLine();
        var a = ReadLine().Split().Reverse();
        WriteLine(string.Join(" ", a));
    }
}
