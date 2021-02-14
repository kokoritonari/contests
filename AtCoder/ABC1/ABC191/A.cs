using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Console.WriteLine(a[3] < a[0] * a[1] || a[0] * a[2] < a[3] ? "Yes" : "No");
    }
}
