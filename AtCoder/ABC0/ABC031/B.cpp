#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h, n; cin >> l >> h >> n;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    int ans = 0;
    if      (h < a) ans = -1;
    else if (a < l) ans = l - a;
    cout << ans << endl;
  }
}
