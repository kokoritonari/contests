using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += ~-n / i;
        }
        Console.WriteLine(ans);
    }
}
