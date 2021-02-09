using System;
using System.Linq;

class P
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        Console.ReadLine().Select(c => (char) ('A' + (c - 'A' + n) % 26)).ToList().ForEach(Console.Write);
    }
}
