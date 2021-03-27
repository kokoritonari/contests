using System;
using System.Linq;
using System.Collections.Generic;
using static System.Console;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        var R = () => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int[] p0 = R(), p = R(), center = new double[] { (p0[0] + p[0]) / 2, (p0[1] + p[1]) / 2 };
        double r = Math.Sqrt((p0[0] - p[0]) * (p0[0] - p[0]) + (p0[1] - p[1]) * (p0[1] - p[1])) / 2;
    }
}
