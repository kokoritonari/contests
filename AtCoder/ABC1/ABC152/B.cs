using System;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split();
        if (a[0][0] > a[1][0]) (a[0], a[1]) = (a[1], a[0]); Console.WriteLine(new string(a[0][0], int.Parse(a[1])));
    }
}
