using System;

class P
{
    static void Main()
    {
        var s = int.Parse(Console.ReadLine());
        Console.WriteLine($"{s / 3600}:{s / 60 % 60}:{s % 60}");
    }
}
