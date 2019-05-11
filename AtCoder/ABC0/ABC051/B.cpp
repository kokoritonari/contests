#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, s; cin >> k >> s;
  int ans = 0;
  for (int i = 0; i <= k; i++) {
    for (int j = 0; j <= k; j++) {
      int n = s - i - j;
      if (0 <= n && n <= k) ans++;
    }
  }
  cout << ans << endl;
}
