#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int sum = 0, num = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (a) {
      sum += a;
      num++;
    }
  }
  cout << (sum + num - 1) / num << endl;
}
