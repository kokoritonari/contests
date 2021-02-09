using System;

class P
{
    static void Main()
    {
        Console.ReadLine();
        string a = Console.ReadLine(), s = a.Substring(0, a.Length / 2);
        Console.WriteLine(a == s + s ? "Yes" : "No");
    }
}
