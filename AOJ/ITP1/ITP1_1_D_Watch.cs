using System;
using System.Linq;

class Program
{
    public static void Main(string[] args)
    {
        int S = int.Parse(Console.ReadLine());
        Console.WriteLine("{0}:{1}:{2}", S / 3600, S / 60 % 60, S % 60);
    }
}
