using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), s = 0, l = 0, r, m;
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        for (; l < n; l++)
        {
            m = a[l];
            for (r = l; r < n;)
            {
                m = m > a[r] ? a[r] : m;
                s = Math.Max(s, m * (-~r++ - l));
            }
        }
        Console.WriteLine(s);
    }
}
