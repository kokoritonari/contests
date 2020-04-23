using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                string[] arr = Console.ReadLine().Split();
                int a = int.Parse(arr[0]), b = int.Parse(arr[2]); string op = arr[1];
                if (op == "?") break;
                if (op == "+") {
                    Console.WriteLine(a + b);
                } else if (op == "-") {
                    Console.WriteLine(a - b);
                } else if (op == "*") {
                    Console.WriteLine(a * b);
                } else if (op == "/") {
                    Console.WriteLine(a / b);
                }
            }
        }
    }
}