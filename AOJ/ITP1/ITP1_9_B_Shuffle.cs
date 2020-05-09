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
                var deck = ReadLine();
                if (deck == "-") break;

                var nShuffle = int.Parse(ReadLine());
                int h = 0;
                for (int i = 0; i < nShuffle; i++)
                {
                    h += int.Parse(ReadLine());
                }
                h %= deck.Length;
                Console.WriteLine(deck.Substring(h) + deck.Substring(0, h));
            }
        }
    }
}