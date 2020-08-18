using c=System.Console;

class P
{
    static void Main()
    {
        int i = 1;
        var x = "";
        while ((x = c.ReadLine()) != "0")
            c.WriteLine($"Case {i++}: {x}");
    }
}
