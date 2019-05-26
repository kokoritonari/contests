#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int idx = 0;
  while (idx < s.size()) {
    bool choku = false;
    if (s.substr(idx, 2) == "ch") {
      choku = true;
      idx += 2;
    }
    if (s.at(idx) == 'o' || s.at(idx) == 'k' || s.at(idx) == 'u') {
      choku = true;
      idx++;
    }
    if (choku == false) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
