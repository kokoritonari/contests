using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.WriteLine(Console.ReadLine().Where((x, i) => x == "LR"[i % 2]).Any() ? "No": "Yes");
    }
}
