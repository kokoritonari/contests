#include <bits/stdc++.h>
using namespace std;
double func(int x, int y, int a, int b, int varx) {
  int ret = (double)(b - a) / x * varx + a;
  return ret;
}

int main() {
  int x, y, a, b, sx, sy, tx, ty; cin >> x >> y >> a >> b >> sx >> sy >> tx >> ty;
  bool s_upper, t_upper;
  s_upper = sy > func(x, y, a, b, sx) ? true : false;
  t_upper = ty > func(x, y, a, b, tx) ? true : false;
  cout << (s_upper ^ t_upper ? "Yes" : "No") << endl;
}
