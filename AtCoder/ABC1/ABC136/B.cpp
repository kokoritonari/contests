#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int size = to_string(n).size();
  int ans = 0;
  if (size < 2) ans = min(n, 9);
  else if (size < 4) ans = max(n - 99 + 9, 9);
  else if (size < 6) ans = max(n - 9999 + 909, 909);
  else ans = 90909;
  cout << ans << endl;
}
