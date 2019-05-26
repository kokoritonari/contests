#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> r(n);
  for (int& e: r) cin >> e;
  sort(r.rbegin(), r.rend());
  double ans = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) ans += r.at(i) * r.at(i) * M_PI;
    else ans -= r.at(i) * r.at(i) * M_PI;
  }
  cout << fixed << setprecision(6) << ans << endl;
}
