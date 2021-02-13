using System;
using static System.Console;

class P
{
    static void Main()
    {
        var d = ReadLine() + "  ";
        for (int c = 0; d != null; d = ReadLine())
        {
            c += d[0] == d[2] ? 1 : -c;
            if (c > 2)
            {
                WriteLine("Yes"); return;
            }
        }
        WriteLine("No");
    }
}
