using System;
using System.Linq;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        int cnt = 0;
        for (int i = s.Length - 1; s[i] == '0'; i--) cnt++;
        for (; cnt > 0; cnt--) s = "0" + s;
        var half = s[..(s.Length / 2)];
        var rest = string.Concat(s[(s.Length / 2)..].Reverse());
        Console.WriteLine(half.Zip(rest, (x, y) => x == y).All(x => x) ? "Yes" : "No");
    }
}
