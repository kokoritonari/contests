using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        Console.WriteLine((a[1] + a[0] - 3) / ~-a[0]);
    }
}
