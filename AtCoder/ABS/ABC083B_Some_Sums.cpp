#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int t = i;
    int s = 0;
    while (t) {
      s += t % 10;
      t /= 10;
    }
    if (a <= s && s <= b) sum += i;
  }
  cout << sum << endl;
}
