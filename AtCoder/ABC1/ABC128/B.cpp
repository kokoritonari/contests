#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, vector<pair<int, int>>> mp;
  set<string> nameset;
  for (int i = 0; i < n; i++) {
    string s; int p; cin >> s >> p;
    nameset.insert(s);
    mp[s].push_back(make_pair(p, i + 1));
  }
  vector<string> name;
  for (auto& e: nameset) {
    name.push_back(e);
    sort(mp[e].rbegin(), mp[e].rend());
  }
  sort(name.begin(), name.end());

  for (auto e: name) {
    for (int i = 0; i < mp[e].size(); i++) {
      cout << mp[e].at(i).second << endl;
    }
  }
}
