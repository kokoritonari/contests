using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var d = new int[4, 3, 10];
        var n = int.Parse(ReadLine());
        for (int i = 0; i < n; i++)
        {
            var a = ReadLine().Split().Select(int.Parse).ToList();
            d[~-a[0], ~-a[1], ~-a[2]] += a[3];
        }
        for (int bi = 0; bi < 4; bi++)
        {
            if (bi != 0) WriteLine(new string('#' , 20));
            for (int fi = 0; fi < 3; fi++)
            {
                for (int ri = 0; ri < 10; ri++)
                {
                    Write($" {string.Join(" ", d[bi, fi, ri])}");
                }
                WriteLine();
            }
        }
    }
}
