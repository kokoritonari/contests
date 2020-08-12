using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var arr = ReadLine().Split().Select(int.Parse).ToList();
        int a = arr[0], b = arr[1], c = arr[2];
        var ans = 0;
        for (int d = a; d <= b; d++)
        {
            if (c % d == 0) ans++;
        }
        WriteLine(ans);
    }
}
