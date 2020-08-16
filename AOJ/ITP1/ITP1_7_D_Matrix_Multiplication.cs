using System;
using System.Linq;
using System.Collections.Generic;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        int n = a[0], m = a[1], l = a[2];
        var A = new List<List<long>>();
        var B = new List<List<long>>();
        var C = new List<List<long>>();
        for (int i = 0; i < n; i++)
        {
            A.Add(ReadLine().Split().Select(long.Parse).ToList());
        }
        for (int i = 0; i < m; i++)
        {
            B.Add(ReadLine().Split().Select(long.Parse).ToList());
        }
        for (int ni = 0; ni < n; ni++)
        {
            for (int li = 0; li < l; li++)
            {
                long inner = 0;
                for (int mi = 0; mi < m; mi++)
                {
                    inner += A[ni][mi] * B[mi][li];
                }
                if (li > 0) Write(" ");
                Write(inner);
            }
            WriteLine();
        }
    }
}
