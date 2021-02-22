using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), a = 0;
        for (; n > 0; n--)
            if (!n.ToString().Contains('7') && !Convert.ToString(n, 8).Contains('7'))
                a++;
        Console.WriteLine(a);
    }
}
