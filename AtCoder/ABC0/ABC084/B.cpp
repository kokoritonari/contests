#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; string s; cin >> a >> b >> s;
  string ans = "Yes";
  if (s.at(a) != '-') ans = "No";
  for (char e: s.substr(0, a)) if (!('0' <= e && e <= '9')) ans = "No";
  for (char e: s.substr(s.size() - b, b)) if (!('0' <= e && e <= '9')) ans = "No";
  cout << ans << endl;
}
