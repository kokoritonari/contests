using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        var a = Console.ReadLine().Split();
        a[0].Zip(a[1], (x, y) => "" + x + y).ToList().ForEach(Console.Write);
    }
}
