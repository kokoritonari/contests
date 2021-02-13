using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var a = R(); var b = R();
        Console.WriteLine(a[0] * b[1] - a[1] * b[0]);
    }
}
