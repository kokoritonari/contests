#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  map<char, int> mp;
  bool ans = true;
  for (char e: s) {
    mp[e]++;
  }
  for (auto it = mp.begin(); it != mp.end(); it++) {
    if (it->second != 2) ans = false;
  }
  cout << (ans ? "Yes" : "No") << endl;
}
