using System.ComponentModel.Design;
using System.Collections.Generic;
using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var d = new Dictionary<int, int>();
        var n = int.Parse(ReadLine());
        var l = ReadLine().Split().Select(int.Parse).ToList();
        foreach (var e in l)
        {
            if (d.ContainsKey(e)) d[e]++;
            else d[e] = 1;
        }
        var keys = d.Keys.OrderBy(x => x).ToList();
        var ans = 0;
        if (l.Count >= 3)
        {
            for (int i = 0; i < keys.Count - 2; i++)
            {
                for (int j = i + 1; j < keys.Count - 1; j++)
                {
                    for (int k = j + 1; k < keys.Count; k++)
                    {
                        int first = keys[i], second = keys[j], third = keys[k];
                        var max = new int[] {first, second, third}.Max();
                        var sum = first + second + third;
                        if (first == second || second == third || third == first) break;
                        if (max >= sum - max) break;
                        ans += d[first] * d[second] * d[third];
                    }
                }
            }
        }
        WriteLine(ans);
    }
}
