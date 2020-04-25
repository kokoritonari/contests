using System;
using System.Linq;
using static System.Console;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            int n = int.Parse(ReadLine());
            string[] cards = new string[52];
            int k = 0;
            foreach (var suit in "SHCD")
            {
                for (int i = 1; i <= 13; i++)
                {
                    cards[k] = suit + " " + i.ToString();
                    k++;
                }
            }

            for (int i = 0; i < n; i++)
            {
                string s = ReadLine();
                for (int j = 0; j < cards.Length; j++)
                {
                    if (s == cards[j])
                    {
                        cards[j] = null;
                        break;
                    }
                }
            }

            for (int i = 0; i < cards.Length; i++)
            {
                if (!(cards[i] == null))
                {
                    WriteLine(cards[i]);
                }
            }
        }
    }
}