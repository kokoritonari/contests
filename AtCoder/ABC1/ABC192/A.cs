using System;

class P
{
    static void Main()
    {
        int x = int.Parse(Console.ReadLine());
        Console.WriteLine((x / 100 + 1) * 100 - x);
    }
}
