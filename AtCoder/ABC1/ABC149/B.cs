using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);
        long t = a[0] - a[2], u = a[1] + (t > 0 ? 0 : t);
        Console.WriteLine($"{(t > 0 ? t : 0)} {(u > 0 ? u : 0)}");
    }
}
