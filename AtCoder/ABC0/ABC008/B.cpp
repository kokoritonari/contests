#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    mp[s]++;
  }
  string ans;
  int mx = 0;
  for (auto e: mp) {
    if (e.second > mx) {
      ans = e.first;
      mx = e.second;
    }
  }
  cout << ans << endl;
}
