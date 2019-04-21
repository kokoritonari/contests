#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> m(n);
  int sum = 0, minm = 1e+9;
  for (auto& e: m) {
    cin >> e;
    sum += e;
    minm = min(minm, e);
  }
  cout << n + (x - sum) / minm << endl;
}
