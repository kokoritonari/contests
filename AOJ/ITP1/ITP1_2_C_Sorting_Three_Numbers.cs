using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        WriteLine(string.Join(" ", ReadLine().Split().Select(int.Parse).OrderBy(x => x)));
    }
}
