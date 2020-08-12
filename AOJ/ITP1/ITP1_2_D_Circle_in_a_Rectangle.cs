using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        // var (w, h, x, y, r) = (a[0], a[1], a[2], a[3], a[4]);
        int w = a[0], h = a[1], x = a[2], y = a[3], r = a[4];
        WriteLine(x < r || w - r < x || y < r || h - r < y ? "No" : "Yes");
    }
}
