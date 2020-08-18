using System;

class P
{
    static void Main()
    {
        while (1 > 0)
        {
            var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            if (a[0] + a[1] == 0) break;
            Console.WriteLine(a[0] < a[1] ? $"{a[0]} {a[1]}" : $"{a[1]} {a[0]}");
        }
    }
}
