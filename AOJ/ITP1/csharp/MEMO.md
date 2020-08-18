# 各usingについて
```cs
using System;                     // 13 chars => System. 2回使うなら必須
using System.Linq;                // 18 chars => 文字数分の価値があるなら
using System.Collections.Generic; // 33 chars => わからん

using static System.Console;      // 28 chars => Console. 4回でペイで4文字節約
using static System.Math;         // 25 chars => Math. 5回でペイ

using c=System.Console;           // 23 chars => 2回でペイで2文字節約，System名前空間の他の機能を使わないなら良い
using m=System.Math;              // 20 chars => Math.がm.に変わるので7回でペイ・1文字節約，あんま意味ないかも
```

# 真偽値
```cs
true: 1 > 0  // 1文字節約
false: 0 > 0 // 2文字節約
```

# キャスト
```cs
(double) x / y => 1.0 * x / y // 4文字節約
```

#　四則演算
```cs
// なにかに使えそう
foreach (var c in "%*+-./")
{
    Console.WriteLine($"{(char)c}: {(int)c}");
}
%: 37
*: 42
+: 43
-: 45
.: 46
/: 47
```

# 配列
```cs
var x = a[0];           // 13 chars => 7回使ってペイ
var x = a[0], y = a[1]; // 23 chars => x, yを4回ずつ使ってペイ
```
