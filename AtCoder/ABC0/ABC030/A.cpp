#include <bits/stdc++.h>
using namespace std;

int main() {
  float a, b, c, d; cin >> a >> b >> c >> d;
  cout << (a * d == c * b ? "DRAW" : (b / a > d / c ? "TAKAHASHI" : "AOKI")) << endl;
}
