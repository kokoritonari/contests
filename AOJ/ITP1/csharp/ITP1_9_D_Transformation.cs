using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var s = ReadLine();
        var n = int.Parse(ReadLine());
        for (string q = ReadLine(); q != null; q = ReadLine())
        {
            var r = q.Split();
            int a = int.Parse(r[1]), b = int.Parse(r[2]);
            if (q[2] == 'i') WriteLine(s.Substring(a, -~b - a));
            if (q[2] == 'v') s = s.Substring(0, a) + string.Join("", s.Substring(a, -~b - a).Reverse()) + s.Substring(-~b);
            if (q[2] == 'p') {s = s.Remove(a, -~b - a); s = s.Insert(a, r[3]);}
        }
    }
}
