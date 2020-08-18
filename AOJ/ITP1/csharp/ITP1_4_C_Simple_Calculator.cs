using System;

class P
{
    static void Main()
    {
        while (1 > 0)
        {
            var r = Console.ReadLine().Split();
            var o = r[1];
            if (o == "?") break;
            int a = int.Parse(r[0]), b = int.Parse(r[2]);
            Console.WriteLine(o == "+" ? a + b : o == "-" ? a - b : o == "*" ? a * b : a / b);
        }
    }
}
