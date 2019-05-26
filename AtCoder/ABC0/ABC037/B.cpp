#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q; cin >> n >> q;
  vector<int> a(n, 0);
  for (int i = 0; i < q; i++) {
    int l, r, t; cin >> l >> r >> t;
    for (int j = l - 1; j < r; j++) {
      a.at(j) = t;
    }
  }
  for (int e: a) cout << e << endl;
}
