using System;
using System.Linq;
using System.Collections.Generic;

class P
{
    static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var a = new HashSet<string>();
        var b = new HashSet<string>();
        for (int i = n; i-- > 0;)
        {
            var s = Console.ReadLine();
            if (s[0] == '!') b.Add(s[1..]);
            else a.Add(s);
        }
        a.IntersectWith(b);
        Console.WriteLine(a.Count() > 0 ? a.ElementAt(0) : "satisfiable");
    }
}
