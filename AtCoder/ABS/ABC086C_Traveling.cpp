#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int pt, px, py; pt = px = py = 0;

  for (int i = 0; i < n; i++) {
    int t, x, y;
    cin >> t >> x >> y;

    int dt, dx, dy;
    dt = t - pt, dx = abs(x - px), dy = abs(y - py);

    if (dx + dy > dt || (dx + dy) % 2 != dt % 2) {
      cout << "No" << endl;
      return 0;
    }

    pt = t, px = x, py = y;
  }
  cout << "Yes" << endl;
}
