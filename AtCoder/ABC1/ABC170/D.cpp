#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (auto& e : a) cin >> e;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    bool dividable = false;
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (a.at(i) % a.at(j) == 0) {
        dividable = true;
        break;
      }
    }
    ans += !dividable;
  }
  cout << ans << endl;
}
