#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(3);
  for (auto& e : s) {cin >> e; cout << char(e.at(0) + 'A' - 'a');}
  cout << endl;
}
