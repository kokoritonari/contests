using System;
using static System.Console;

class P
{
    static void Main()
    {
        while (1 > 0)
        {
            var a = Array.ConvertAll(ReadLine().Split(), int.Parse);
            if (a[0] + a[1] == 0) break;
            for (int i = 0, j; i++ < a[0]; WriteLine())
                for (j = 0; j < a[1]; Write((i + j++) % 2 > 0 ? "#" : "."));
            WriteLine();
        }
    }
}
