#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; int k; cin >> s >> k;
  map<string, int> mp;
  for (int i = 0; i <= s.size() - k && k <= s.size(); i++) {
    mp[s.substr(i, k)] = 1;
  }
  cout << mp.size() << endl;
}
