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
            int h = a[0], w = a[1];
            if (h == 0 && w == 0) break;
            for (int hi = 0; hi < h; hi++)
            {
                for (int wi = 0; wi < w; wi++)
                {
                    Write("#");
                }
                WriteLine();
            }
            WriteLine();
        }
    }
}
