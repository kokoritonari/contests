using System;
using System.Linq;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split();
        Console.WriteLine(Console.ReadLine().Split().Select(int.Parse).Sum() < int.Parse(a[0]) ? "No" : "Yes");
    }
}
