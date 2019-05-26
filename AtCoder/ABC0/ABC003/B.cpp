#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t; cin >> s >> t;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) != t.at(i)) {
      if (s.at(i) == '@') {
        switch (t.at(i)) {
          case 'a': case 't': case 'c': case 'o': case 'd': case 'e': case 'r': case '@': break;
          default: {
            cout << "You will lose" << endl;
            return 0;
          }
        }
      } else if (t.at(i) == '@') {
        switch (s.at(i)) {
          case 'a': case 't': case 'c': case 'o': case 'd': case 'e': case 'r': break;
          default: {
            cout << "You will lose" << endl;
            return 0;
          }
        }
      } else {
        cout << "You will lose" << endl;
        return 0;
      }
    }
  }
  cout << "You can win" << endl;
}
