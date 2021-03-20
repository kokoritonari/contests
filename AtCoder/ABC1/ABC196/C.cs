using System;

class P
{
    static void Main()
    {
        long n = long.Parse(Console.ReadLine()), i = 1, x, ans = 0;
        for (;; i++)
        {
            var iStr = i.ToString();
            x = long.Parse(iStr + iStr);
            if (x > n) break;
            ans++;
        }
        Console.WriteLine(ans);
    }
}
