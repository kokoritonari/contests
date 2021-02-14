using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), i = n, j, r = 0;
        var a = new int[n][];
        for (; i-- > 0;)
        {
            a[i] = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        }
        for (; ++i < ~-n;)
        {
            for (j = i; ++j < n;)
            {
                var t = 1.0 * (a[i][1] - a[j][1]) / (a[i][0] - a[j][0]);
                r += -1 <= t && t <= 1 ? 1 : 0;
            }
        }
        Console.WriteLine(r);
    }
}
