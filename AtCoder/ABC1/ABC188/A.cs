using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Console.WriteLine(Math.Abs(a[1] - a[0]) < 3 ? "Yes" : "No");
    }
}
