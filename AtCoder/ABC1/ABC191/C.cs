using System;
using System.Linq;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int i = a[0], j, r = 0; var f = new string[a[0]];
        for (; i-- > 0;) f[i] = Console.ReadLine();
        for (; ++i < ~-a[0];)
        {
            for (j = 0; j < ~-a[1]; j++)
            {
                r += new char[] { f[i][j], f[i][j + 1], f[i + 1][j], f[i + 1][j + 1] }.Count(c => c == '#') % 2;
            }
        }
        Console.WriteLine(r);
    }
}
