using System;
using System.Linq;

class P
{
    static void Main()
    {
        var x = Console.ReadLine().Split()[1];
        Console.WriteLine(string.Join(' ', Console.ReadLine().Split().Where(n => n != x)));
    }
}
