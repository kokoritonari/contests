using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] a = R(), b = R();
        int t = Math.Abs(a[0] - b[0]), u = Math.Abs(a[1] - b[1]);
        Console.WriteLine((t | u) == 0 ? 0 :
            t + u < 4 || t == u ? 1 :
            t + u < 7 || (t + u) % 2 == 0 || Math.Abs(t - u) < 4 ? 2 : 3
        );
    }
}
