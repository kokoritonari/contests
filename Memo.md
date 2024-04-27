# 速度が遅くなる主な原因
* for文をネストする
* `list.pop(0), list.insert(0, x), del list[0]`をする
  * 特にリストのサイズが大きいとき
  * `A = A[1:]`とかはもっと遅い
  * なのでできれば`A = A[:n] + A[n+1:]`も使わないほうがいい
* `if a in A`を使うときに`A`がリストになっている
  * -> セットにしたほうが良い
* その他

# 速度向上のための構文
* リスト内包表記
* `for i in [0]*n`
  * ちょっと早い
* collections.dequeを使う
* 標準入力を全部読み込んでから処理をする
* sys.stdin.readlineをinputの代わりに使う

# 計算テクニック
* 切り上げ
  * `(a + b - 1) // b`
* `x -- a // b`で切り上げたものを足せる(?)
* `max(strlist, key=len)`を使うと長さが一番の文字列を返す
  * maxにはkeyに関数を渡せて、listの全要素にkeyを適用したものの中で最大のものを返す
  * mapと同じ
* 2の倍数かどうかは1とのビットand演算子で計算できる
  * `n & 1`
* `1eXX`で10のXX乗を表すことができる
  * `10eXX`ではないので注意
* ビット全探索
  * bitのi桁目を取る
  * `(bit >> i) & 1'

# C++
* 三項演算子の中身は型が違うとコンパイルエラーになる
  * to_string()で文字列に置き換えたりする
* `==`や`<`などはかなり厳密に判定されるので、float型を使うと詰む
  * floatを使わなくても計算できる形にする
* mapの要素の取り出し方
  * `for (auto i = mp.begin(); i != mp.end(); i++) cout << i->second << endl;`
  * `for (auto e: mp) cout << e.second << endl;`
* int型の範囲
  * `10 ** 9`までは入る
  * それ以上は`long long`を使わないと入らない

# dart
* Cascade Notation
  * 代入の際にvoidを返すメソッドも呼べるようになるすごい書き方
  * `..`でメソッドにアクセスする
  * `final a = List.generate(10, (i) => i)..removeWhere((e) => e % 2 != 0);`
