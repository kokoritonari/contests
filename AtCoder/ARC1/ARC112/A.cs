using System;
using static System.Console;

class P
{
    static void Main()
    {
        var t = int.Parse(ReadLine());
        for (; t-- > 0;)
        {
            var a = Array.ConvertAll(ReadLine().Split(), int.Parse);
            if (a[1] < a[0] * 2)
            {
                WriteLine(0);
                continue;
            }
            if (a[0] == a[1])
            {
                WriteLine(a[0] == 0 ? 1 : 0);
                continue;
            }
            long n = a[1] - a[0] * 2 + 1;
            WriteLine((1 + n) * n / 2);
        }
    }

    static void TLE()
    {
        var t = int.Parse(Console.ReadLine());
        for (; t-- > 0;)
        {
            long result = 0;
            var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            for (int i = a[0] * 2; i <= a[1]; i++)
            {
                long count = 0;
                int end = i / 2;
                count += i % 2 == 0 ? 1 : 0;
                if (count > 0) end--;
                count += (end - a[0] + 1) * 2;
                result += count;
                Console.WriteLine($"{i} {count} {result}");
            }
            Console.WriteLine(result);
        }
    }
}
