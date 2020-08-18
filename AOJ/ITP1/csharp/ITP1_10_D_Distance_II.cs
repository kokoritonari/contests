using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        ReadLine();
        var x = ReadLine().Split().Select(int.Parse);
        var y = ReadLine().Split().Select(int.Parse);
        var d = x.Zip(y, (a, b) => Math.Abs(a - b));
        for (int i = 1; i < 4; i++)
            WriteLine(Math.Pow(d.Select(z => Math.Pow(z, i)).Sum(), 1.0 / i));
        WriteLine(d.Max());
    }
}
