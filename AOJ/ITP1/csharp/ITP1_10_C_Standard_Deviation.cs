using System;
using System.Linq;

class P
{
    static void Main()
    {
        while (Console.ReadLine() != "0")
        {
            var a = Console.ReadLine().Split().Select(int.Parse);
            Console.WriteLine(Math.Sqrt(a.Select(x => Math.Pow(x - a.Average(), 2)).Sum() / a.Count()));
        }
    }
}
