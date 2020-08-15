using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(long.Parse).ToList();
        long x = a[0], k = a[1], d = a[2];
        long wantk = x / d;
        if (wantk > k)
        {
            WriteLine(Math.Abs(x - k * d));
            return;
        }
        x -= wantk * d;
        k -= wantk;
        if (k % 2 == 0)
        {
            WriteLine(Math.Abs(x));
        }
        else
        {
            WriteLine(Math.Abs(x - d));
        }
    }
}
