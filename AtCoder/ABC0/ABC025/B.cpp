#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b; cin >> n >> a >> b;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string s; int d; cin >> s >> d;
    ans += (s == "East" ? 1 : -1) * min(max(d, a), b);
  }
  if (ans == 0) cout << 0 << endl;
  else cout << (ans > 0 ? "East" : "West") << " " << to_string(abs(ans)) << endl;
}
