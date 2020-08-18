using System;
using static System.Console;

class P
{
    static void Main()
    {
        var d = new int[5, 4, 11];
        int i = int.Parse(ReadLine()), j, k;
        while (i-- > 0)
        {
            var a = Array.ConvertAll(ReadLine().Split(), int.Parse);
            d[a[0], a[1], a[2]] += a[3];
        }
        for (i = 0; i++ < 4;)
        {
            if (i > 1) WriteLine(new string('#', 20));
            for (j = 0; j++ < 3; WriteLine())
                for (k = 0; k++ < 10; Write($" {d[i, j, k]}"));
        }
    }
}
