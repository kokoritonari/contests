using System;
using static System.Console;

class P
{
    static void Main()
    {
        var n = int.Parse(ReadLine());
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i.ToString().Contains("3")) Write($" {i}");
        }
        WriteLine();
    }
}
