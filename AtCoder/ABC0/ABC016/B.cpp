#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  bool p = a + b == c, m = a - b == c;
  cout << (p && m ? "?" : (p ? "+" : (m ? "-" : "!"))) << endl;
}
