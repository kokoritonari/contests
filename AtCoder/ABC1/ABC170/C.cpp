#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, n; cin >> x >> n;
  vector<int> p(n);
  for (auto& e : p) cin >> e;

  int ans, min_diff = 10e3;
  for (int i = 0; i < 120; i++) {
    if (find(p.begin(), p.end(), x + i) == p.end()) {
      if (i <= min_diff) {
        min_diff = i;
        ans = x + i;
      }
    }

    if (find(p.begin(), p.end(), x - i) == p.end()) {
      if (i <= min_diff) {
        min_diff = i;
        ans = x - i;
      }
    }
  }
  cout << ans << endl;
}
