#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b; cin >> a >> b;
  string ans;
  if (a.size() == b.size()) {
    if (a == b) ans = "EQUAL";
    else if (a > b) ans = "GREATER";
    else ans = "LESS";
  } else {
    if (a.size() > b.size()) ans = "GREATER";
    else ans = "LESS";
  }
  cout << ans << endl;
}
