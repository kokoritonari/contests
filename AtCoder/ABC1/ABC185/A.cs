using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.WriteLine(Console.ReadLine().Split().Select(int.Parse).Min());
    }
}
