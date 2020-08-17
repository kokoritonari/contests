using System;
using static System.Console;

class P
{
    static void Main()
    {
        int t = 0, h = 0;
        var s = new int[] { 0, 1, 3 };
        for (int i = 0, n = int.Parse(ReadLine()); i < n; i++)
        {
            var a = ReadLine().Split();
            t += s[-~a[0].CompareTo(a[1])];
            h += s[-~a[1].CompareTo(a[0])];
        }
        WriteLine($"{t} {h}");
    }
}
