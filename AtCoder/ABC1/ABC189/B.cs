using System;

class P
{
    static void Main()
    {
        Func<double[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
        double[] a = R(), b; int i = 0;
        for (a[1] *= 100; i++ < a[0];)
        {
            b = R();
            a[1] -= b[0] * b[1];
            if (a[1] < 0) break;
        }
        Console.WriteLine(a[1] < 0 ? i : -1);
    }
}
