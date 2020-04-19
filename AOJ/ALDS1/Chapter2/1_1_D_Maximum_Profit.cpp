#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> r(n);

  cin >> r.at(0);
  int minv = r.at(0);
  int maxv = -1 * pow(10, 9);

  for (int i = 1; i < n; i++) {
    cin >> r.at(i);
    maxv = max(maxv, r[i] - minv);
    minv = min(minv, r[i]);
  }
  
  cout << maxv << endl;
}
