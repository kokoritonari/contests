using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Console.WriteLine(a[0] + a[1] > 14 && a[1] > 7 ? 1 : a[0] + a[1] > 9 && a[1] > 2 ? 2 : a[0] + a[1] > 2 ? 3 : 4);
    }
}
