#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  int ans = 0;
  for (int i = 1; i < s.size(); i++) {
    string sub = t.substr(i - 1, 2);
    if (s.find(sub) != string::npos) ans++;
  }
  cout << ans << endl;
}
