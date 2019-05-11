#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int ans = 0;
  for (int len = s.size() - 2; len > 0; len -= 2) {
    if (s.substr(0, len / 2) == s.substr(len / 2, len / 2)) {
      ans = len;
      break;
    }
  }
  cout << ans << endl;
}
