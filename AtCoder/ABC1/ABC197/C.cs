using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int ans = int.MaxValue;
        for (int i = 1; i < n; i++)
        {
            var first = a[..i];
            var second = a[i..];
            var firstOR = GetOR(first);
            var secondOR = GetOR(second);
            var xor = firstOR ^ secondOR;
            ans = xor < ans ? xor : ans;
            Console.WriteLine("fir");
            foreach (var item in first)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine($"or: {firstOR}");
            Console.WriteLine("sec");
            foreach (var item in second)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine($"or: {secondOR}");
        }
        Console.WriteLine(ans);
    }
    static int GetOR(int[] elements)
    {
        int or = 0;
        foreach (var e in elements)
        {
            or |= e;
        }
        return or;
    }
}
