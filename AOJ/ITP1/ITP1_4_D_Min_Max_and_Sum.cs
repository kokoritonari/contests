using System;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());
            var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            long min = a[0], max = a[0], sum = a[0];
            for (int i = 1; i < n; i++)
            {
                min = (a[i] < min) ? a[i] : min;
                max = (a[i] > max) ? a[i] : max;
                sum += a[i];
            }
            Console.WriteLine("{0} {1} {2}", min, max, sum);
        }
    }
}