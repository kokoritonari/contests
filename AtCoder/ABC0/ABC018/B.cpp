#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; int n; cin >> s >> n;
  for (int i = 0; i < n; i++) {
    int l, r; cin >> l >> r;
    while (l < r) {
      swap(s.at(l - 1), s.at(r - 1));
      l++, r--;
    }
  }
  cout << s << endl;
}
