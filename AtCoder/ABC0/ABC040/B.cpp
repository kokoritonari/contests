#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 1e9;
  for (int i = sqrt(n); i > 0; i--) {
    ans = min(ans, n % i + (n / i) - i);
  }
  cout << ans << endl;
}
