using System;
using System.Linq;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        Console.WriteLine(s.Where((x, i) => i % 2 == 0).Any(c => char.IsUpper(c)) || s.Where((x, i) => i % 2 == 1).Any(c => char.IsLower(c)) ? "No" : "Yes");
    }
}
