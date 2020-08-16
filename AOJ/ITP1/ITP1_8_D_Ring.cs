using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        var p = Console.ReadLine();
        Console.WriteLine((s + s).Contains(p) ? "Yes" : "No");
    }
}
