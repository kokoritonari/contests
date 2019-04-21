#include <bits/stdc++.h>
using namespace std;

int main() {
  int x; cin >> x;
  int ans = 1;
  for (int i = 2; i <= x; i++) {
    for (int j = 2; j <= 10; j++) {
      int power = pow(i, j);
      if (power > x) break;
      ans = max(ans, power);
    }
  }
  cout << ans << endl;
}
