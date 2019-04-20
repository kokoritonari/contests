#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int t = n, s = 0;
  while (t) {
    s += t % 10;
    t /= 10;
  }
  cout << (n % s == 0 ? "Yes" : "No") << endl;
}
