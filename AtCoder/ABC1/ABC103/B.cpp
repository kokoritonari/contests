#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t; cin >> s >> t; bool eq = false;
  for (int i = 0; i < s.size(); i++) {
    if (s == t) {
      eq = true;
      break;
    }
    s = s.back() + s.substr(0, s.size() - 1);
  }
  cout << (eq ? "Yes" : "No") << endl;
}
