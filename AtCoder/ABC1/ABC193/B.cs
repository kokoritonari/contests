using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), ans = int.MaxValue;
        for (; n-- > 0;)
        {
            var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            if (a[0] < a[2]) ans = a[1] < ans ? a[1] : ans;
        }
        Console.WriteLine(ans == int.MaxValue ? -1 : ans);
    }
}
