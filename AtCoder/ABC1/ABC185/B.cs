using System;
using static System.Console;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(ReadLine().Split(), int.Parse);
        int[] a = R(), b;
        int r = a[0], i = 0, d;
        for (; a[1]-- > 0; d = b[1] - b[0], r = r + d > a[0] ? a[0] : r + d, i = b[1])
        {
            b = R();
            r -= b[0] - i;
            if (r < 1)
            {
                WriteLine("No");
                return;
            }
        }
        WriteLine(r - a[2] + i > 0 ? "Yes" : "No");
    }
}
