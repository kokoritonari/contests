#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  if (n == 1) {
    cout << a.at(0) << endl;
    exit(0);
  }

  string ans;
  for (int i = 0; i < n / 2; i++) {
    bool found = false;
    string s = a.at(i), t = a.at(n - 1 - i);
    for (auto c : s) {
      if (t.find(c) != string::npos) {
        ans.push_back(c);
        found = true;
        break;
      }
    }
    if (!found) {
      cout << -1 << endl;
      exit(0);
    }
  }
  cout << ans;
  reverse(ans.begin(), ans.end());
  if (n % 2) cout << a.at(n / 2 + 1).at(0);
  cout << ans << endl;
}
