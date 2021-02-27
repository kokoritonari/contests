using System;
using System.Collections.Generic;

class P
{
    static void Main()
    {
        var n = long.Parse(Console.ReadLine());
        var s = new SortedSet<long>();
        for (long i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                s.Add(i);
                s.Add(n / i);
            }
        }
        foreach (var e in s) Console.WriteLine(e);
    }
}
