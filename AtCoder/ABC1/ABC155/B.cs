using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        Console.WriteLine(Console.ReadLine().Split().Select(int.Parse).Where(x => x % 2 == 0).Any(x => x % 3 > 0 && x % 5 > 0) ? "DENIED" : "APPROVED");
    }
}
