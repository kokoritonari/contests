using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        /*
        for (var i = 0; i < 1000; i++)
        {
            Console.WriteLine("Hello World");
        }
        */
        new int[1000].ToList().ForEach(x => WriteLine("Hello World"));
    }
}
