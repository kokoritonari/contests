using System;
using static System.Console;

class P
{
    static void Main()
    {
        int i = 0;
        var a = new int[9];
        for (; i < 3;)
        {
            var t = Array.ConvertAll(ReadLine().Split(), int.Parse);
            (a[i*3], a[i*3+1], a[i++*3+2]) = (t[0], t[1], t[2]);
        }
        int n = int.Parse(ReadLine());
        for (i = 0; i < n; i++)
        {
            int b = int.Parse(ReadLine());
            for (int j = 0; j < 9; j++)
            {
                if (a[j] == b) a[j] = 0;
            }
        }
        var ans = "No";
        for (i = 0; i < 3; i++)
        {
            if (a[i] + a[i+3] + a[i+6] == 0) ans = "Yes";
            if (a[i*3] + a[i*3+1] + a[i*3+2] == 0) ans = "Yes";
        }
        if (a[0] + a[4] + a[8] == 0) ans = "Yes";
        if (a[2] + a[4] + a[6] == 0) ans = "Yes";
        WriteLine(ans);
    }
}
