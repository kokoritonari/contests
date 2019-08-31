#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l; cin >> n >> l;
  vector<int> apple(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    apple.at(i) = i + l;
    sum += apple.at(i);
  }
  int min_diff = 1e+9, ans;
  for (int i = 0; i < n; i++) {
    int diff = abs(apple.at(i));
    if (diff < min_diff) {
      min_diff = diff;
      ans = sum - apple.at(i);
    }
  }
  cout << ans << endl;
}
