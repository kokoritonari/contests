using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var arr = ReadLine().Split().Select(int.Parse).ToList();
        int a = arr[0], b = arr[1];
        WriteLine($"{a / b} {a % b} {(double) a / b :f5}");
    }
}
