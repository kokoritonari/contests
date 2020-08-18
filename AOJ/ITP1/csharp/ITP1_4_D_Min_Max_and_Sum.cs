using c=System.Console;
using System.Linq;

class P
{
    static void Main()
    {
        c.ReadLine();
        var a = c.ReadLine().Split().Select(long.Parse);
        c.WriteLine($"{a.Min()} {a.Max()} {a.Sum()}");
    }
}
