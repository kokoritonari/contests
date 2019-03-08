#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int min = 1000000000;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    int count = 0;
    for (;a % 2 == 0; count++) {
      a /= 2;
    }
    min = (min > count)? count: min;
  }
  cout << min << endl;
}
