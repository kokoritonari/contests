#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int maxp = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    int p; cin >> p;
    maxp = max(maxp, p);
    sum += p;
  }
  cout << sum - maxp / 2 << endl;
}
