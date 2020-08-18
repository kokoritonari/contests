using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var c = 0;
        // WriteLine(Enumerable.Range(a[0], -~a[1] - a[0]).Count(x => a[2] % x == 0));
        while (a[0] <= a[1])
            if (a[2] % a[0]++ == 0) c++;
        Console.WriteLine(c);
    }
}
