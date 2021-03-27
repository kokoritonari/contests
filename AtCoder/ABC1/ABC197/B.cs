using System;

class P
{
    static void Main()
    {
        var a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int h = a[0], w = a[1], x = a[2], y = a[3];
        var s = new string[a[0]];
        for (int i = 0; i < s.Length; i++)
        {
            s[i] = Console.ReadLine();
        }
        string horizontal = s[~-x], vertical = OrthogonalString(~-y, s);
        int ans = 0;
        ans += Visible(~-y, - 1, horizontal);
        ans += Visible(~-y, 1, horizontal);
        ans += Visible(~-x, - 1, vertical);
        ans += Visible(~-x, 1, vertical);
        Console.WriteLine(ans - 3);
    }
    static int Visible(int x, int step, string s)
    {
        int count = 0;
        for (; 0 <= x && x < s.Length && s[x] == '.'; x += step)
        {
            count++;
        }
        return count;
    }
    static string OrthogonalString(int y, string[] s)
    {
        var str = "";
        for (int i = 0; i < s.Length; i++)
        {
            str += s[i][y];
        }
        return str;
    }
}
