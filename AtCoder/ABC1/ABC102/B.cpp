#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  int maxd = 0;
  for (int& e: a) cin >> e;
  for (int i = 0; i < a.size(); i++) {
    for (int j = i + 1; j < a.size(); j++) {
      maxd = max(maxd, abs(a[i] - a[j]));
    }
  }
  cout << maxd << endl;
}
