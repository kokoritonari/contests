using System;
using System.Linq;

class P
{
    static void Main()
    {
        var x = Console.ReadLine();
        var m = long.Parse(Console.ReadLine());
        int ans = 0;
        for (int i = -~int.Parse(x.Max().ToString());; i++)
        {
            long n = 0;
            for (int j = 0; j < x.Length; j++)
            {
                n += int.Parse(x[x.Length - 1 - j].ToString()) * (long)Math.Pow(i, j);
            }
            if (0 < n && n <= m) ans++;
            else break;
        }
        Console.WriteLine(ans);
    }
}
