using System;

class P
{
    static void Main()
    {
        var s = Console.ReadLine();
        int ans = 99, l = s.Length;
        for (int bit = 1 << l; bit-- > 1;)
        {
            int sum = 0, delete = 0;
            for (int i = l; i-- > 0;)
            {
                int flag = bit >> i & 1;
                sum += flag * int.Parse($"{s[i]}");
                delete += 1 - flag;
            }
            if (sum % 3 == 0) ans = delete < ans ? delete : ans;
        }
        Console.WriteLine(ans < 99 ? ans : -1);
    }
}
