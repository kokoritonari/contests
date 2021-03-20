using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] a = R(), b = R();
        Console.WriteLine(a[1] - b[0]);
    }
}
