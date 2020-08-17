using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int r = a[4];
        Console.WriteLine(a[2] < r || a[0] - r < a[2] || a[3] < r || a[1] - r < a[3] ? "No" : "Yes");
    }
}
