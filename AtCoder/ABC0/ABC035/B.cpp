#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  int x = 0, y = 0, cnt = 0;
  for (auto e: s) {
    if      (e == '?') {cnt++; continue;}
    else if (e == 'L') {  x--; continue;}
    else if (e == 'R') {  x++; continue;}
    else if (e == 'U') {  y++; continue;}
    else if (e == 'D') {  y--; continue;}
  }
  int ans = abs(x) + abs(y);
  if (t == "1") ans += cnt;
  else          ans = (ans >= cnt ? ans - cnt : (cnt - ans) % 2);
  cout << ans << endl;
}
