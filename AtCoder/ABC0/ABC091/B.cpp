#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    mp[s]++;
  }

  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    string s; cin >> s;
    mp[s]--;
  }

  int ans = 0;
  for (auto e: mp) ans = max(ans, e.second);
  /*
  for (auto i = mp.begin(); i != mp.end(); i++) {
    ans = max(ans, mp[i->first]);
  }
  */
  cout << ans << endl;
}
