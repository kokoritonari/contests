using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        Console.WriteLine(s + (s[s.Length - 1] == 's' ? "es" : "s"));
    }
}
