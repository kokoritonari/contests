#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  int position = 0, ans = 1;
  for (int i = 0; i < n; i++) {
    int l; cin >> l;
    position += l;
    if (position <= x) ans++;
  }
  cout << ans << endl;
}
