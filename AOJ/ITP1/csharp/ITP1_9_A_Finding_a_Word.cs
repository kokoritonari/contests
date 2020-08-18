using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var w = ReadLine();
        var a = 0;
        for (var s = ""; s != "END_OF_TEXT"; s = ReadLine())
            a += s.ToLower().Split().Count(x => x == w);
        WriteLine(a);
    }
}
