#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int digits = 0;
  for (int i = b; i > 0; i /= 10) digits++;
  int n = int(a * pow(10, digits)) + b;
  for (int i = 1; i <= n / 2; i++) {
    if (i * i == n) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
