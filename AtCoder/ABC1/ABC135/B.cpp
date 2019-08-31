#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    int p; cin >> p;
    if (!(p == i)) cnt++;
  }
  cout << (cnt <= 2 ? "YES" : "NO") << endl;
}
