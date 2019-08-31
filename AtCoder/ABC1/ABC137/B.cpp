#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, x; cin >> k >> x;
  for (int i = x + 1 - k; i < x + k; i++) {
    if (i > x + 1 - k) cout << " ";
    cout << i;
  }
  cout << endl;
}
