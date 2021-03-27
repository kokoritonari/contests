using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        Console.WriteLine(s[1..] + s[0]);
    }
}
