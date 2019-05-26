#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if ('A' <= s.at(i) && s.at(i) <= 'Z') s.at(i) += 'a' - 'A';
    if (i == 0) s.at(i) -= 'a' - 'A';
  }
  cout << s << endl;
}
