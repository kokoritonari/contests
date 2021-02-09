using System;
using System.Linq;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var a = Enumerable.Range(1, 9);
        Console.WriteLine(a.SelectMany(x => a.Select(y => x * y)).Any(x => x == n) ? "Yes" : "No");
    }
}
