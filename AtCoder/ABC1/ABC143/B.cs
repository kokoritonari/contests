using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        var d = Console.ReadLine().Split().Select(int.Parse);
        Console.WriteLine(d.SelectMany((x, i) => d.Skip(-~i).Select(y => x * y)).Sum());
    }
}
