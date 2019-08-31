#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d; cin >> n >> d;
  int watch_range = 2 * d + 1;
  cout << (n + watch_range - 1) / watch_range << endl;
}
