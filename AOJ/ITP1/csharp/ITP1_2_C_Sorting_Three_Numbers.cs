using c=System.Console;
using System.Linq;

class P
{
    static void Main() => c.WriteLine(string.Join(" ", c.ReadLine().Split().Select(int.Parse).OrderBy(x => x)));
}
