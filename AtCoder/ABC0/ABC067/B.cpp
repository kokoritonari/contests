#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> l(n);

  for (int& e: l) cin >> e;
  sort(l.rbegin(), l.rend());

  int ans = 0;
  for (int i = 0; i < k; i++) {
    ans += l.at(i);
  }
  cout << ans << endl;
}
