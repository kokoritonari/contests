using System;
using System.Linq;
using System.Collections.Generic;

class P
{
    static void Main()
    {
        var n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var a = new int[n[0]][];
        int ans = 0;
        for (int i = 0; i < n[0]; i++)
        {
            a[i] = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        }

        foreach (var perm in GetAllPermutation(~-n[0]))
        {
            int time = a[0][perm[0]], nowCity = perm[0];
            for (int i = 1; i < perm.Length; i++)
            {
                int nextCity = perm[i];
                time += a[nowCity][nextCity];
                nowCity = nextCity;
            }
            time += a[perm[^1]][0];
            if (time == n[1]) ans++;
        }
        Console.WriteLine(ans);
    }

    static List<int[]> GetAllPermutation(int n)
    {
        var res = new List<int[]>();
        var array = Enumerable.Range(1, n).ToArray();
        do
        {
            var copy = new int[n];
            array.CopyTo(copy, 0);
            res.Add(copy);
        } while (NextPermutation(array));

        return res;
    }

    static bool NextPermutation(int[] array)
    {
        var size = array.Length;
        var ok = false;

        int i = size - 2;
        for (; 0 <= i; i--)
        {
            if (array[i] < array[i + 1])
            {
                ok = true;
                break;
            }
        }

        if (ok == false) return false;

        int j = size - 1;
        for (;; j--)
        {
            if (array[i] < array[j]) break;
        }

        (array[i], array[j]) = (array[j], array[i]);
        Array.Reverse(array, i + 1, size - (i + 1));

        return true;
    }
}
