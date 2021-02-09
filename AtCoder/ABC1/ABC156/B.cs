using System;

class P
{
    static void Main()
    {
        var a = Console.ReadLine().Split();
        int n = int.Parse(a[0]), k = int.Parse(a[1]), i = 0;
        for (; n > 0; n /= k) i++;
        Console.WriteLine(i);
    }
}
