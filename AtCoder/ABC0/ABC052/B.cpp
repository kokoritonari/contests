#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; string s; cin >> n >> s;
  int x = 0, ans = 0;
  for (char e: s) {
    if (e == 'I') x++;
    else x--;
    ans = max(ans, x);
  }
  cout << ans << endl;
}
