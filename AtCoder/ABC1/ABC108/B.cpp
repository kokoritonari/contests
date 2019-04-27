#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  int xsub = x2 - x1, ysub = y2 - y1;
  int x3 = x2 - ysub, y3 = y2 + xsub;
  int x4 = x3 - xsub, y4 = y3 - ysub;
  printf("%d %d %d %d\n", x3, y3, x4, y4);
}
