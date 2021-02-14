using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] a = R(), b;
        for (; a[0]-- > 0;)
        {
            b = R();
            if (b[0] < a[1] && b[1] > a[2]) break;
        }
        Console.WriteLine(a[0] < 0 ? "No" : "Yes");
    }
}
