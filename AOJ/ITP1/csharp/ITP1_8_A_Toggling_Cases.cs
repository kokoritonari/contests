using System;

class P
{
    static void Main()
    {
        foreach (var c in Console.ReadLine())
            Console.Write(char.IsUpper(c) ? char.ToLower(c) : char.ToUpper(c));
        Console.WriteLine();
    }
}
