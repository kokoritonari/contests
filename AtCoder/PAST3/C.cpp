#include <bits/stdc++.h>
#define m 1000000000
using namespace std;

int main() {
  long long a; int r, n; cin >> a >> r >> n;
  for (int i = 1; i < n; i++) {
    a *= r;
    if (a > m) {
      cout << "large";
      exit(0);
    }
  }
  cout << a;
}