#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  for (int i = 0; i < 12; i++) {
    string s; cin >> s;
    bool includeR = false;
    for (auto c: s) {
      if (c == 'r') includeR = true;
    }
    if (includeR) ans++;
  }
  cout << ans << endl;
}
