using System;

class P
{
    static void Main()
    {
        long s = 0;
        for (int i = int.Parse(Console.ReadLine()); i > 0; i--)
        {
            var a = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);
            s += (a[0] + a[1]) * (-~a[1] - a[0]) / 2;
        }
        Console.WriteLine(s);
    }
}
