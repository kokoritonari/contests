#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n; cin >> w >> h >> n;
  vector<bool> bx(w, true);
  vector<bool> by(h, true);
  for (int i = 0; i < n; i++) {
    int x, y, a; cin >> x >> y >> a;
    if      (a == 1) for (int j = 0; j < x; j++) bx.at(j) = false;
    else if (a == 2) for (int j = x; j < w; j++) bx.at(j) = false;
    else if (a == 3) for (int j = 0; j < y; j++) by.at(j) = false;
    else if (a == 4) for (int j = y; j < h; j++) by.at(j) = false;
  }
  int cntx = 0, cnty = 0;
  for (bool e: bx) if (e) cntx++;
  for (bool e: by) if (e) cnty++;

  int ans = cntx * cnty;
  cout << ans << endl;
}
