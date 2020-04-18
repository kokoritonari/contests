using System;
using System.Linq;

class Program
{
    public static void Main(string[] args)
    {
        int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Console.WriteLine("{0} {1}", a.Aggregate((now, next) => now * next), a.Sum() * 2);
    }
}
