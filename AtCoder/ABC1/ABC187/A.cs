using System;
using System.Linq;

class P
{
    static void Main()
    {
        Console.WriteLine(Console.ReadLine().Split().Select(s => s.Select(c => c - '0').Sum()).Max());
    }
}
