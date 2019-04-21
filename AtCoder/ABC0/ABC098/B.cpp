#include <bits/stdc++.h>
using namespace std;

int func(string s, string t) {
  int ans = 0;
  for (char c = 'a'; c <= 'z'; c++) {
    bool founds = false, foundt = false;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == c) {
        founds = true;
      }
    }
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == c) {
        foundt = true;
      }
    }
    if (founds && foundt) ans++;
  }
  return ans;
}

int main() {
  int n; string s; cin >> n >> s;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int tmp = func(s.substr(0, i), s.substr(i));
    ans = max(ans, tmp);
  }
  cout << ans << endl;
}
