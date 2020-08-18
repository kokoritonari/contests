using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        int n = a[0], m = a[1];
        var A = new int[n][];
        var b = new int[m];
        for (int ni = 0; ni < n; ni++)
        {
            A[ni] = ReadLine().Split().Select(int.Parse).ToArray();
        }
        for (int mi = 0; mi < m; mi++)
        {
            b[mi] = int.Parse(ReadLine());
        }
        for (int ni = 0; ni < n; ni++)
        {
            for (int mi = 0; mi < m; mi++)
            {
                A[ni][mi] *= b[mi];
            }
            WriteLine(A[ni].Sum());
        }
    }
}
