#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (auto& e : a) {
    cin >> e;
  }
  int s = accumulate(a.begin(), a.end(), 0);
  for (auto e : a) {
    n -= 4 * e * m < s;
  }
  cout << (n < m ? "No" : "Yes") << endl;
}
