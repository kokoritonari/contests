#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int x, oneway = 0;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x > k - x) {
      oneway += k - x;
    } else {
      oneway += x;
    }
  }
  cout << oneway * 2 << endl;
}
