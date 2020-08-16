using System;
using System.Linq;
using System.Collections.Generic;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        var s = new List<List<int>>();
        var t = new int[-~a[1]];
        for (int i = 0; i < a[0]; i++)
        {
            s.Add(ReadLine().Split().Select(int.Parse).ToList());
            s[i].Add(s[i].Sum());
            for (int j = 0; j < s[i].Count; j++)
            {
                t[j] += s[i][j];
            }
        }
        s.Add(t.ToList());
        s.ForEach(x => WriteLine(string.Join(" ", x)));
    }
}
