using System;

class P
{
    static void Main()
    {
        Func<int[]> R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var a = R();
        int i = a[0], s = 0, m = 100;
        for (; i-- > 0;)
        {
            var b = R();
            foreach (var e in b)
            {
                s += e;
                m = e < m ? e : m;
            }
        }
        Console.WriteLine(s - m * a[0] * a[1]);
    }
}
