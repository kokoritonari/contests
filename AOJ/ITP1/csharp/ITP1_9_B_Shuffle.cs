using System;
using static System.Console;

class P
{
    static void Main()
    {
        for (var s = ReadLine(); s != "-"; s = ReadLine())
        {
            var h = 0;
            for (int i = 0, m = int.Parse(ReadLine()); i < m; i++)
                h += int.Parse(ReadLine());
            WriteLine((s + s).Substring(h % s.Length, s.Length));
        }
    }
}
