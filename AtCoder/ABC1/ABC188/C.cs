using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.ReadLine();
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int l = a.Length / 2;
        Console.WriteLine(-~Array.IndexOf(a, Math.Min(a[..l].Max(), a[l..].Max())));
    }
}
