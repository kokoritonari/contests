using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        int i = s.IndexOf(".");
        i = i < 0 ? s.Length : i;
        Console.WriteLine(s[..i]);
    }
}
