using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
        Console.WriteLine(a[0] + a[1] * (a[2] - a[0]) / (a[1] + a[3]));
    }
}
