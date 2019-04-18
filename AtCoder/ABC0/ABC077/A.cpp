#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  for (int i = 0; i < 3; i++) {
    if (s.at(i) != t.at(2 - i)) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
