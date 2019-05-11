#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  set<char> a;
  for (auto& e: s) a.insert(e);
  for (char c = 'a'; c <= 'z'; c++) {
    if (!a.count(c)) {
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
