using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), c = 200;
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var hist = new int[c * 2 + 1];
        for (int i = 0; i < n; i++)
        {
            hist[a[i] + c]++;
        }
        long ans = 0;
        for (int i = 0; i < hist.Length; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ans += (long) ((i - c) - (j - c)) * ((i - c) - (j - c)) * hist[i] * hist[j];
            }
        }
        Console.WriteLine(ans);
    }
}
