using System;
using System.Linq;
using System.Collections.Generic;
using static System.Console;

class P
{
    static void Main()
    {
    }

    // C#でNextPermutationを実装して順列全列挙を行う【競技プログラミング特化ver】 - Qiita
    // https://qiita.com/G4NP0N/items/ffdef36f250809fc4296
    static List<int[]> GetAllPermutation(int n)
    {
        var res = new List<int[]>();
        var array = Enumerable.Range(0, n).ToArray();
        do
        {
            var copy = new int[n];
            array.CopyTo(copy, 0);
            res.Add(copy);
        } while (NextPermutation(array));

        return res;
    }

    static List<int[]> GetAllPermutation(int[] array)
    {
        var size = array.Length;
        var res = new List<int[]>();
        do
        {
            var copy = new int[size];
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
