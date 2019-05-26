#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t; cin >> n >> t;
  vector<int> a(n);
  for (int& e: a) cin >> e;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int past = a.at(i - 1);
    int now = a.at(i);
    ans += (now - past < t ? now - past : t);
  }
  ans += t;
  cout << ans << endl;
}
