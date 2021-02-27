using System;
using static System.Console;

class P
{
    static void Main()
    {
        int n = int.Parse(ReadLine());
        var a = new int[n][];
        for (int i = 0; i < n; i++)
        {
            a[i] = Array.ConvertAll(ReadLine().Split(), int.Parse);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                for (int k = 0; k < j; k++)
                {
                    (int x1, int y1) = (a[i][0], a[i][1]);
                    (int x2, int y2) = (a[j][0], a[j][1]);
                    (int x3, int y3) = (a[k][0], a[k][1]);
                    x1 -= x3;
                    x2 -= x3;
                    y1 -= y3;
                    y2 -= y3;
                    if (x1 * y2 == x2 * y1)
                    {
                        WriteLine("Yes");
                        return;
                    }
                }
            }
        }
        WriteLine("No");
    }
}
