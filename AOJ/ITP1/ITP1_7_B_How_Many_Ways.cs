using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        while (true)
        {
            var a = ReadLine().Split().Select(int.Parse).ToList();
            int n = a[0], x = a[1], ans = 0;
            if (n + x == 0) break;
            for (int i = 1; i <= n; i++)
            {
                for (int j = -~i; j <= n; j++)
                {
                    var k = x - i - j;
                    if (j < k && k <= n) ans++;
                }
            }
            WriteLine(ans);
        }
    }
}
