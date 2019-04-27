#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, a; cin >> n >> t >> a;
  double minsub = 1000;
  int ans;
  for (int i = 0; i < n; i++) {
    int h; cin >> h;
    double c = t - h * 0.006;
    double sub = abs(a - c);
    if (sub < minsub) {
      minsub = sub;
      ans = i + 1;
    }
  }
  cout << ans << endl;
}
