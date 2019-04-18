#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x, y; cin >> n >> k >> x >> y;
  int a = min(n, k);
  int b = max(n - k, 0);
  cout << a * x + b * y << endl;
}
