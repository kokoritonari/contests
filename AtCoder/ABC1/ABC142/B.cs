using System;
using System.Linq;

class P
{
    static void Main()
    {
        int k = int.Parse(Console.ReadLine().Split()[1]);
        Console.WriteLine(Console.ReadLine().Split().Count(x => int.Parse(x) >= k));
    }
}
