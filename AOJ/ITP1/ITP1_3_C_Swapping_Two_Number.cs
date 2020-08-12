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
            if (a[0] == 0 && a[1] == 0) break;
            WriteLine(string.Join(" ", a.OrderBy(x => x)));
        }
    }
}
