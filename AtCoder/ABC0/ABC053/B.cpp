#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  // cout << s.find_last_of("Z") - s.find_first_of("A") + 1 << endl;
  int aloc, zloc;
  bool is_a_finded = false;
  for (int i = 0; i < s.size(); i++) {
    if (!is_a_finded) {
      if (s.at(i) == 'A') {
        aloc = i;
        is_a_finded = true;
      }
    }
    if (s.at(i) == 'Z') zloc = i;
  }
  cout << zloc - aloc + 1 << endl;
}
