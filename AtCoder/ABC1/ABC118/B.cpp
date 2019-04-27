#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> foods(m);
  for (int i = 0; i < n; i++) {
    int k; cin >> k;
    for (int j = 0; j < k; j++) {
      int a; cin >> a;
      foods.at(a - 1)++;
    }
  }
  int ans = 0;
  for (auto e : foods) if (e == n) ans++;
  cout << ans << endl;
}
