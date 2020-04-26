using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            string str;
            int[] a = new int[26];
            while ((str = ReadLine()) != null)
            {
                 for (int i = 0; i < str.Length; i++)
                {
                    if ('A' <= str[i] && str[i] <= 'Z')
                    {
                        a[str[i] - 'A']++;
                    }
                    else if ('a' <= str[i] && str[i] <= 'z')
                    {
                        a[str[i] - 'a']++;
                    }
                }
            }

            for (int i = 0; i < a.Length; i++)
            {
                WriteLine("{0} : {1}", (char) ('a' + i), a[i]);
            }
        }
    }
}