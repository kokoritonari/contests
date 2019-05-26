#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  vector<int> cnt(6, 0);
  for (auto c: s) {
    cnt.at(c - 'A')++;
  }
  for (int i = 0; i < 6; i++) {
    if (i) cout << ' ';
    cout << cnt.at(i);
  }
  cout << endl;
}
