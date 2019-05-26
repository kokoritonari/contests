#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<string, int>> city(n);
  int population = 0;
  for (auto& e: city) {
    string s; int p; cin >> s >> p;
    e = make_pair(s, p);
    population += p;
  }
  string ans = "atcoder";
  for (auto e: city) {
    if (e.second > population / 2) {
      ans = e.first;
    }
  }
  cout << ans << endl;
}
