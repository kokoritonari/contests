#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, c; cin >> n >> m >> c; int ans = 0;
  vector<int> b(m); for (int& e : b) cin >> e;
  for (int i = 0; i < n; i++) {
    vector<int> a(m);
    int sum = 0;
    for (int j = 0; j < m; j++) {
      int a; cin >> a;
      sum += a * b.at(j);
    }
    if (sum > -c) ans++;
  }
  cout << ans << endl;
}
