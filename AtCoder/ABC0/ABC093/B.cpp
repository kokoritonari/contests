#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k; cin >> a >> b >> k;
  if (b - a < 2 * k) {
    for (int i = a; i <= b; i++) cout << i << endl;
  } else {
    for (int i = a; i < a + k; i++) cout << i << endl;
    for (int i = b - k; i < b; i++) cout << i + 1 << endl;
  }
}
