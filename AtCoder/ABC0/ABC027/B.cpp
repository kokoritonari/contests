#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  int sum = 0;
  for (auto& e: a) cin >> e, sum += e;
  if (sum % n != 0) {
    cout << -1 << endl;
    return 0;
  }
  int mean = sum / n;
  sum = 0;
  int cnt = 0, ans = 0;
  int i;
  for (i = 0; i < n; i++) {
    sum += a.at(i);
    cnt++;
    if (sum % cnt == 0 && sum / cnt == mean) {
      sum = 0;
      cnt = 0;
    } else if (sum / cnt < mean) {
      break;
    } else {
      ans++;
    }
  }
  sum = 0, cnt = 0;
  for (int j = n - 1; j >= i; j--) {
    sum += a.at(j);
    cnt++;
    if (sum % cnt == 0 && sum / cnt == mean) {
      sum = 0;
      cnt = 0;
    } else if (sum / cnt < mean) {
      break;
    } else {
      ans++;
    }
  }
  cout << ans << endl;
}
