#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, x; cin >> a >> b >> x;
  cout << b / x + 1 - (a > 0 ? (a - 1) / x + 1 : 0) << endl;
}
