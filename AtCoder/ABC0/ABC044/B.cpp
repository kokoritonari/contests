#include <bits/stdc++.h>
using namespace std;

int main() {
  string w; cin >> w;
  vector<bool> cnt('z' - 'a' + 1, true);
  for (auto e: w) {
    int idx = e - 'a';
    cnt.at(idx) = not cnt.at(idx);
  }
  bool ans = true;
  for (auto e: cnt) ans &= e;
  cout << (ans ? "Yes" : "No") << endl;
}
