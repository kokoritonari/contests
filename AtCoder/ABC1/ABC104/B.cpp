#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  bool satisfy = true;
  if (s[0] != 'A') satisfy = false;
  int c = 0;
  for (int i = 2; i < s.size() - 1; i++) {
    if (s[i] == 'C') {
      c++;
    }
  }
  if (c != 1) satisfy = false;
  int upper = 0;
  for (int i = 0; i < s.size(); i++) {
    if ('A' <= s[i] && s[i] <= 'Z') upper++;
  }
  if (upper != 2) satisfy = false;
  cout << (satisfy ? "AC" : "WA") << endl;
}
