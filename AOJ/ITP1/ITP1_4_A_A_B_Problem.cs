using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int a = arr[0];
            int b = arr[1];
            Console.WriteLine("{0} {1} {2:f5}", a / b, a % b, (double) a / b);
        }
    }
}