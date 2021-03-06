using System;

class P
{
    static void Main()
    {
        var n = long.Parse(Console.ReadLine());
        var s = new System.Collections.Generic.HashSet<long>();
        for (var i = 2L; i * i <= n; i++)
        {
            var x = 1L * i * i;
            for (; x <= n; x *= i) s.Add(x);
        }
        Console.WriteLine(n - s.Count);
    }
}
