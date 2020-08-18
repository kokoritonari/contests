using System;
using System.Collections.Generic;
using static System.Console;

class P
{
    static void Main()
    {
        var a = new List<string>();
        foreach (var e in "SHCD")
        {
            for (int i = 1; i < 14; i++)
            {
                a.Add($"{e} {i}");
            }
        }
        var n = int.Parse(ReadLine());
        for (int i = 0; i < n; i++)
        {
            a.Remove(ReadLine());
        }
        if (a.Count != 0) WriteLine(string.Join("\n", a));
    }
}
