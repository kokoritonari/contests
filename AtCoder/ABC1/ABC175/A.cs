using System;
using System.Linq;
using static System.Console;

class P
{
    static void Main()
    {
        var s = ReadLine();
        int ans = 0, max = 0;
        foreach (var c in s)
        {
            if (c == 'R') max++;
            else {
                ans = ans < max ? max : ans;
                max = 0;
            }
        }
        ans = ans < max ? max : ans;
        WriteLine(ans);
    }
}
