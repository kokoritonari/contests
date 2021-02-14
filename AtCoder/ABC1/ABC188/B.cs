using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int i = R()[0], s = 0; int[] a = R(), b = R();
        for (; i-- > 0; s += a[i] * b[i]);
        Console.WriteLine(s == 0 ? "Yes" : "No");
    }
}
