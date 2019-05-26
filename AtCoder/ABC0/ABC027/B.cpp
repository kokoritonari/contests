#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (auto& e: a) cin >> e, sum += e;
  if (sum % n != 0) {
    cout << -1 << endl;
    return 0;
  }
  int mean = sum / n;
  for (auto& e: a) e -= mean;
  sum = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    sum += a.at(i);
    if (sum != 0) ans++;
  }
  cout << ans << endl;
}
