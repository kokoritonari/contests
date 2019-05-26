#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int cnt = 1;
  string ans;
  ans.push_back(s.at(0));
  for (int i = 1; i < s.size(); i++) {
    if (s.at(i - 1) == s.at(i)) {
      cnt++;
    } else {
      for (char e: to_string(cnt)) ans.push_back(e);
      ans.push_back(s.at(i));
      cnt = 1;
    }
  }
  for (char e: to_string(cnt)) ans.push_back(e);
  cout << ans << endl;
}
