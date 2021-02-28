using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), mod = 1000000007;
        var a = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);
        var b = new long[n];

        b[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }

        long ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long t = (b[n - 1] - b[i]) % mod * a[i];
            ans += t;
            ans %= mod;
        }
        Console.WriteLine(ans);
    }
}
