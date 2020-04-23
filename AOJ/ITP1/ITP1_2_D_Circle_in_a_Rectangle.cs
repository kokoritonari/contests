using System;
using System.Collections.Generic;
using System.Linq;

namespace Contest
{
    class Program
    {
        public static void Main(string[] args)
        {
            (int W, int H, int x, int y, int r) = Console.ReadLine().SplitToInt().ToTuple5();
            Console.WriteLine(x < r || W - r < x || y < r || H - r < y ? "No" : "Yes");
        }

    }

    // https://teratail.com/questions/254722
    static class Util
    {
        public static IEnumerable<int> SplitToInt(this string source)
        {
            return source.Split().Select(int.Parse);
        }

        public static (T, T) ToTuple2<T>(this IEnumerable<T> source)
        {
            return source.ToList().Chain(a => (a[0], a[1]));
        }

        public static (T, T, T) ToTuple3<T>(this IEnumerable<T> source)
        {
            return source.ToList().Chain(a => (a[0], a[1], a[2]));
        }

        public static (T, T, T, T) ToTuple4<T>(this IEnumerable<T> source)
        {
            return source.ToList().Chain(a => (a[0], a[1], a[2], a[3]));
        }

        public static (T, T, T, T, T) ToTuple5<T>(this IEnumerable<T> source)
        {
            return source.ToList().Chain(a => (a[0], a[1], a[2], a[3], a[4]));
        }

        public static T Chain<T>(
            this T source,
            Action<T> action)
        {
            if (action == null)
                throw new ArgumentNullException(nameof(action));

            action(source);
            return source;
        }

        public static TResult Chain<TSource, TResult>(
            this TSource source,
            Func<TSource, TResult> func)
        {
            if (func == null)
                throw new ArgumentNullException(nameof(func));

            return func(source);
        }

        public static T ToVariable<T>(this T source, out T variable)
        {
            variable = source;
            return source;
        }
    }
}
