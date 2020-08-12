using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var a = ReadLine().Split().Select(int.Parse).ToList();
        WriteLine($"a {(a[0] > a[1] ? ">" : a[0] < a[1] ? "<" : "==")} b");
        // Console.WriteLine(a[0] == a[1] ? "a == b" :
        //                   a[0] >  a[1] ? "a > b"  : "a < b");
    }
}
