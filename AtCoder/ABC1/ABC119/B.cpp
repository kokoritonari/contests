#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n; double ans = 0;
  for (int i = 0; i < n; i++) {
    double x; string u;
    cin >> x >> u;
    ans += (u == "JPY" ? x : x * 380000);
  }
  cout << ans << endl;
}
