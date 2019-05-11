#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  vector<bool> a(26);
  for (auto e: s) {
    if (a.at(e - 'a')) {
      cout << "no" << endl;
      return 0;
    }
    a.at(e - 'a') = true;
  }
  cout << "yes" << endl;
}
