#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, a, b; cin >> w >> a >> b;
  cout << max({a - b - w, b - a - w, 0}) << endl;
}
  /*
  if (b > a + w) {
    cout << b - a - w << endl;
  } else if (b + w < a) {
    cout << a - b - w << endl;
  } else {
    cout << 0 << endl;
  }
}
*/
