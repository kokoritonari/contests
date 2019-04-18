#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, t, w; cin >> n >> s >> t >> w;
  int a, c = 0;
  for (int i = 0; i < n; i++) {
    if (s <= w && w <= t) c++;
    cin >> a; w += a;
  }
  cout << c << endl;
}
