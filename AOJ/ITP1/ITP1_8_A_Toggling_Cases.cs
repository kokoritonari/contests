using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            var str = ReadLine().ToArray();
            for (int i = 0; i < str.Length; i++)
            {
                if ('A' <= str[i] && str[i] <= 'Z')
                {
                    str[i] = (char) (str[i] + 'a' - 'A');
                }
                else if ('a' <= str[i] && str[i] <= 'z')
                {
                    str[i] = (char) (str[i] - 'a' + 'A');
                }
            }
            WriteLine(str);
        }
    }
}