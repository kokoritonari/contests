#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b; cin >> n >> a >> b;
  set<int> d;
  for (int i = 0; i < b; i++) {
    int tmp;
    cin >> tmp;
    d.insert(tmp);
  }
  int ans = 0;
  int cnt = 1;
  for (int i = 1; i <= n; i++) {
    if (d.find(i) != d.end()) {
      cnt = 1;
    } else if (cnt >= a) {
      cnt = 1;
    } else {
      ans++;
      cnt++;
    }
  }
  cout << ans << endl;
}
