#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string w, pw; cin >> pw;
  map<string, int> wmap; wmap[pw] = 1;
  for (int i = 1; i < n; i++) {
    string w; cin >> w;
    if (wmap[w] or pw.back() != w.at(0)) {
      cout << "No" << endl;
      return 0;
    }
    wmap[w] = 1;
    pw = w;
  }
  cout << "Yes" << endl;
}
