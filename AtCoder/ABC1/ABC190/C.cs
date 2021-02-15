using System;
using System.Linq;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var n = R();
        var cond = new int[n[1]][]; int i = n[1], j;
        for (; i-- > 0;) cond[i] = R();

        var k = int.Parse(Console.ReadLine());
        var select = new int[k][];
        for (; ++i < k;) select[i] = R();

        int ans = 0;
        for (i = 1 << k; i-- > 0;)
        {
            var dish = new bool[n[0] + 1];
            for (j = 0; j < k; j++)
                dish[select[j][i >> j & 1]] = true;
            ans = Math.Max(ans, cond.Count(e => dish[e[0]] && dish[e[1]]));
        }
        Console.WriteLine(ans);
    }
}
