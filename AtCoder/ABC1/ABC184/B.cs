using System;

class P
{
    static void Main()
    {
        var x = int.Parse(Console.ReadLine().Split()[1]);
        foreach (var c in Console.ReadLine())
            x += c == 'o' ? 1 : x > 0 ? -1 : 0;
        Console.WriteLine(x);
    }
}
