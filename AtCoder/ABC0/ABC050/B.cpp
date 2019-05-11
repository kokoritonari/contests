#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> t(n);
  int sum = 0;
  for (int& e: t) cin >> e, sum += e;

  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    int p, x; cin >> p >> x;
    int ans = sum - t.at(p - 1) + x;
    cout << ans << endl;
  }
}
