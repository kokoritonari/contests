using System;
using System.Linq;
using System.Collections.Generic;

class P
{
    static void Main()
    {
        Console.ReadLine();
        Func<List<int>> R = () => Console.ReadLine().Split().Select(int.Parse).ToList();
        List<int> a = R(), b = R(), c = R();
        Console.WriteLine(b.Sum() + a.Zip(a.Skip(1), (x, y) => y - x == 1 ? c.ElementAt(~-x) : 0).Sum());
    }
}
