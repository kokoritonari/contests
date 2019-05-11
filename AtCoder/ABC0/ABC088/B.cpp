#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  int ans = 0;
  for (int& e: a) cin >> e;
  sort(a.rbegin(), a.rend());
  for (int i = 0; i < n; i++) ans += a.at(i) * (i % 2 == 0 ? 1 : -1);
  cout << ans << endl;
}
