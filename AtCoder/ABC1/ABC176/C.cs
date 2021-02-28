using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        long max = a[0], ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (max > a[i])
            {
                ans += max - a[i];
            }
            else
            {
                max = a[i];
            }
        }
        Console.WriteLine(ans);
    }
}
