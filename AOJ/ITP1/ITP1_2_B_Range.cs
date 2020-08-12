using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        WriteLine(a[0] < a[1] && a[1] < a[2] ? "Yes" : "No");
    }
}
