using System;
using static System.Console;

class P
{
    static void Main()
    {
        for (int i = 1;; i++)
        {
            var x = ReadLine();
            if (x == "0") break;
            WriteLine($"Case {i}: {x}");
        }
    }
}
