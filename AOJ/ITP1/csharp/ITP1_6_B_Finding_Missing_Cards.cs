using System.Linq;
using c=System.Console;

class P
{
    static void Main()
    {
        var a = new string[] { }.ToList();
        int n = int.Parse(c.ReadLine()), i;
        foreach (var e in "SHCD")
            for (i = 1; i < 14; a.Add($"{e} {i++}"));
        for (i = 0; i++ < n; a.Remove(c.ReadLine()));
        if (a.Count > 0) c.WriteLine(string.Join("\n", a));
    }
}
