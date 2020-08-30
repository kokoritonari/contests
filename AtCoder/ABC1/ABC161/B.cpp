#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (auto& e : a) {
    cin >> e;
  }
  int thres = accumulate(a.begin(), a.end(), 0) / 4.0 / m;
  for (auto e : a) {
    m -= e >= thres;
  }
  cout << (m > 0 ? "No" : "Yes") << endl;
}
