#include <bits/stdc++.h>
using namespace std;

int main() {
  int s; cin >> s;
  int i = 1;
  if (s == 1 or s == 2) {cout << 4 << endl; return 0;}
  while (s != 4) {
    s = (s % 2 == 0 ? s / 2 : 3 * s + 1);
    i++;
  }
  cout << i + 3 << endl;
}
