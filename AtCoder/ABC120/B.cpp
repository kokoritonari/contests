#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k; cin >> a >> b >> k;
  int i = min(a, b), cnt = 0;
  while (i > 0) {
    if (a % i == 0 and b % i == 0) cnt++;
    if (cnt == k) break;
    i--;
  }
  cout << i << endl;
}
