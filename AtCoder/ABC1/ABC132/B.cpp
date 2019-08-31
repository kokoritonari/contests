#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> p(n);
  for (int& e: p) cin >> e;
  int ans = 0;
  for (int i = 1; i < n - 1; i++) {
    if ((p.at(i - 1) < p.at(i) && p.at(i) < p.at(i + 1)) or (p.at(i - 1) > p.at(i) && p.at(i) > p.at(i + 1))) ans++;
  }
  cout << ans << endl;
}
