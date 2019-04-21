#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x; cin >> n >> m >> x;
  vector<int> a(m);
  int left = 0, right = 0;
  for (auto& e: a) {
    cin >> e;
    if (e < x) left++;
    if (x < e) right++;
  }
  cout << min(left, right) << endl;
}
