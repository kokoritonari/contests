using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                string x = ReadLine();
                if (x[0] == '0') break;
                int sum = 0;
                for (int i = 0; i < x.Length; i++)
                {
                    sum += int.Parse(x[i].ToString());
                }
                WriteLine(sum);
            }
        }
    }
}