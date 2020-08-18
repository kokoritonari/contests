using c=System.Console;
using System.Linq;

class P
{
    static void Main()
    {
        c.ReadLine();
        c.WriteLine(string.Join(" ", c.ReadLine().Split().Reverse()));
    }
}
