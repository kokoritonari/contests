#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<bool> b(n);
  for (int& e: a) cin >> e;
  int now = 0;
  int next = a.at(0) - 1;
  int ans = 0;
  while (!b.at(next)) {
    ans++;             // ボタンを押す
    b.at(now) = true;  // 押したことが記録される
    now = next;        // 光っているボタンが移動
    next = a.at(next) - 1; // 次のボタンが確定
    if (now == 1) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
