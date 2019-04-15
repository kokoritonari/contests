#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  vector<string> t = {"dream", "dreamer", "erase", "eraser"};

  reverse(s.begin(), s.end());
  for (int i = 0; i < t.size(); i++) reverse(t.at(i).begin(), t.at(i).end());

  bool isConnectable = true;
  for (int i = 0; i < s.size();) {
    bool matchSubstr = false;
    for (string e : t) {
      if (s.substr(i, e.size()) == e) {
        i += e.size();
        matchSubstr = true;
        break;
      }
    }
    if (!matchSubstr) {
      isConnectable = false;
      break;
    }
  }
  if (isConnectable) cout << "YES" << endl;
  else cout << "NO" << endl;
}
