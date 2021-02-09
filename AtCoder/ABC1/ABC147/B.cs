using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        int n = s.Length, i = 0, r = 0;
        while (i < n / 2)
            r += s[i] != s[~-n-i++] ? 1 : 0;
        Console.WriteLine(r);
    }
}
