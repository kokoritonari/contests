#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; int k; cin >> s >> k;
  for (int i = 0; i < k; i++) s = s.substr(1, s.size() - 1) + s.substr(0, 1);
  cout << s << endl;
}
