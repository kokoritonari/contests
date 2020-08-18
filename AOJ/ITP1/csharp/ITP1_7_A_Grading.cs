using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        while (true)
        {
            var a = ReadLine().Split().Select(int.Parse).ToList();
            int m = a[0], f = a[1], r = a[2], s = m + f;
            if (m + f + r == -3) break;
            WriteLine(m == ~0 || f == ~0 || s < 30 ? "F" :
                      s < 50 ? r < 50 ? "D" : "C" :
                      s < 65 ? "C" :
                      s < 80 ? "B" : "A");
        }
    }
}
