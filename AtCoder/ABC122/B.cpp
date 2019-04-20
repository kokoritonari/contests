#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s; int ans = 0, now = 0;
  for (auto e : s) {
    if (e == 'A' or e == 'T' or e == 'G' or e == 'C') ans = max(ans, ++now);
    else now = 0;
  }
  cout << ans << endl;
}
