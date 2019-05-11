#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int& e: a) cin >> e;
  int ans = 0;
  while (true) {
    bool isEven = true;
    for (int& e: a) {
      if (e & 1) isEven = false;
      else e /= 2;
    }
    if (isEven) ans++;
    else break;
  }
  cout << ans << endl;
}
