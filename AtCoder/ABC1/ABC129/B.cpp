#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> w(n);
  for (int& e: w) cin >> e;
  int ans = 1e+9;
  for (int i = 0; i < n; i++) {
    int s_start = 0, s_end = 0;
    for (int j = 0; j < i; j++) {
      s_start += w.at(j);
    }
    for (int j = i; j < n; j++) {
      s_end += w.at(j);
    }
    ans = min(ans, abs(s_start - s_end));
  }
  cout << ans << endl;
}
