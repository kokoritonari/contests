#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0, maxDiff = 0;
  for (int i = 0; i < 5; i++) {
    int a; cin >> a;
    int b = (a + 9) / 10 * 10;
    sum += b;
    maxDiff = max(maxDiff, b - a);
  }
  cout << sum - maxDiff << endl;
}
