using System;
using System.Linq;

class P
{
    static void Main()
    {
        var s = "";
        for (var t = ""; t != null; t = Console.ReadLine()) s += t.ToLower();
        for (char c = 'a'; c <= 'z'; c++)
            Console.WriteLine($"{c} : {s.Count(x => x == c)}");
    }
}
