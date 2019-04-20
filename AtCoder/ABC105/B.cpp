#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 0; i <= n / 4; i++) {
    for (int j = 0; j <= n / 7; j++) {
      int m = 4 * i + 7 * j;
      if (m == n) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
