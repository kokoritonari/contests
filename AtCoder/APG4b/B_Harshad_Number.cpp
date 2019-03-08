#include <bits/stdc++.h>
using namespace std;

int main() {
  int origin, n;
  cin >> origin;
  n = origin;
  int fx = 0;
  for (; n > 0; n /= 10) {
    fx += n % 10;
  }
  if (origin % fx == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
