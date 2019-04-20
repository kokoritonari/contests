#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, y; cin >> n >> m >> x >> y;
  int maxx, miny;
  if (x < y) maxx = x, miny = y;
  else {cout << "War" << endl; return 0;}

  for (int i = 0; i < n; i++) {
    int xi; cin >> xi;
    maxx = max(maxx, xi);
  }
  for (int i = 0; i < m; i++) {
    int yi; cin >> yi;
    miny = min(miny, yi);
  }
  cout << (maxx < miny ? "No War" : "War") << endl;
}
