using System;
using static System.Console;

class P
{
    static void Main()
    {
        for (int n = int.Parse(ReadLine()), i = 0; i++ < n;)
            if (i % 3 == 0 || i.ToString().Contains("3")) Write($" {i}");
        WriteLine();
    }
}
