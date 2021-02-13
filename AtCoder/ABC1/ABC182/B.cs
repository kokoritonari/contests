using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        var a = Console.ReadLine().Split().Select(int.Parse);
        Console.WriteLine(Enumerable.Range(2, a.Max()).OrderBy(i => a.Count(x => x % i == 0)).Last());
    }
}
