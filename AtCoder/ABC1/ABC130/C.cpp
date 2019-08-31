#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, x, y; cin >> w >> h >> x >> y;
  double area = w * h / 2.0;
  int cnt = x * 2 == w && y * 2 == h;
  cout << area << " " << cnt << endl;
}
