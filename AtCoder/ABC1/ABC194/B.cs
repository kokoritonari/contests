using System;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine()), i = 0, j, ans = int.MaxValue, maxt;
        int[] a = new int[n], b = new int[n];
        for (; i < n; i++)
        {
            var t = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            a[i] = t[0]; b[i] = t[1];
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                maxt = a[i] > b[j] ? a[i] : b[j];
                if (i == j) ans = ans > a[i] + b[j] ? a[i] + b[j] : ans;
                else ans = ans > maxt ? maxt : ans;
            }
        }
        Console.WriteLine(ans);
    }
}
