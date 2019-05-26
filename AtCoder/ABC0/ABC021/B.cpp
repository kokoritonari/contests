#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, k; cin >> n >> a >> b >> k;
  vector<int> t(n, 0);
  t.at(a - 1)++;
  t.at(b - 1)++;
  for (int i = 0; i < k; i++) {
    int p; cin >> p;
    t.at(p - 1)++;
  }
  string ans = "YES";
  for (int i = 0; i < n; i++) if (t.at(i) > 1) ans = "NO";
  cout << ans << endl;
}
