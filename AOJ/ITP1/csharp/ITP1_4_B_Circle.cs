using System;

class P
{
    static void Main()
    {
        var r = double.Parse(Console.ReadLine());
        Console.WriteLine($"{r * r * Math.PI} {2 * r * Math.PI}");
    }
}
