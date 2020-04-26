using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            string s = ReadLine();
            string ss = s + s;
            string p = ReadLine();
            bool found = false;
            for (int i = 0; i < ss.Length - p.Length; i++)
            {
                if (ss.Substring(i, p.Length) == p)
                {
                    WriteLine("Yes");
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                WriteLine("No");
            }
        }
    }
}