using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var str = ReadLine();
            var q = int.Parse(ReadLine());
            for (int i = 0; i < q; i++)
            {
                var query = ReadLine().Split();
                int a = int.Parse(query[1]);
                int b = int.Parse(query[2]);
                if (query[0] == "replace")
                {
                    str = str.Substring(0, a) + query[3] + str.Substring(b + 1);
                }
                else if (query[0] == "reverse")
                {
                    str = str.Substring(0, a) + string.Join("", str.Substring(a, b - a + 1).Reverse()) + str.Substring(b + 1);
                }
                else
                {
                    WriteLine(str.Substring(a, b - a + 1));
                }
            }
        }
    }
}