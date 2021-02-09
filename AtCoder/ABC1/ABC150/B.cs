using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), i = 0, r = 0;
        var s = Console.ReadLine();
        for (; i < n - 2;)
            if (s.Substring(i++, 3) == "ABC") r++;
        Console.WriteLine(r);
    }
}
