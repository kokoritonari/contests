using System;
using System.Linq;

class P
{
    static void Main()
    {
        for (string s; (s = Console.ReadLine()) != "0"; Console.WriteLine(s.Select(x => x - '0').Sum()));
    }
}
