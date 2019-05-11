#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  string ans;
  for (auto e: s) {
    if (e != 'B') ans.push_back(e);
    else if (ans.size() > 0) ans.pop_back();
  }
  cout << ans << endl;
}
