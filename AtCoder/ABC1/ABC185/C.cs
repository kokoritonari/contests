using System;
using System.Linq;

class P
{
    static void Main()
    {
        int n = ~-int.Parse(Console.ReadLine()), f = 1, g, i, j;
        var a = Enumerable.Range(1, n).ToArray();
        var b = Enumerable.Range(1, 11).Concat(Enumerable.Range(1, n - 11)).ToArray();
        for (; f > 0;)
        {
            f = 1;
            for (i = a.Length; i-- > 0;)
                for (j = a.Length; j-- > 0;)
                {
                    g = G(a[i], b[j]);
                    if (g > 1) f = 0;
                    a[i] /= g; b[j] /= g;
                }
        }
        long l = 1, m = 1;
        foreach (var e in a) l *= e;
        foreach (var e in b) m *= e;
        Console.WriteLine(l / m);
    }
    static int G(int m, int n) => n == 0 ? m : G(n, m % n);
}
