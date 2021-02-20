using System;
using System.Linq;

class P
{
    static void Main()
    {
        var l = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int n = l[0], k = l[1];
        for (int i = 1; i <= k; i++)
        {
            var nStr = n.ToString();
            var d = int.Parse(new String(nStr.OrderByDescending(c => c).ToArray())) - int.Parse(new String(nStr.OrderBy(c => c).ToArray()));
            n = d;
        }
        Console.WriteLine(n);
    }
}
