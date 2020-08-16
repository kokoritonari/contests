using System;
using static System.Console;

class P
{
    static void Main()
    {
        while (true)
        {
            var arr = ReadLine().Split();
            var op = arr[1];
            if (op == "?") break;
            int a = int.Parse(arr[0]), b = int.Parse(arr[2]);
            WriteLine(op == "+" ? a + b : op == "-" ? a - b : op == "*" ? a * b : a / b);
        }
    }
}
