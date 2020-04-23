using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int a = arr[0];
            int b = arr[1];
            int c = arr[2];
            int ans = 0;
            for (int divisor = a; divisor <= b; divisor++)
            {
                if (c % divisor == 0) ans++;
            }
            Console.WriteLine(ans);
        }
    }
}