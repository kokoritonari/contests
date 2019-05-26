#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<char>> s(n, vector<char>(n));
  for (auto& e: s) {
    for (auto& el: e) {
      cin >> el;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << s.at(n - 1 - j).at(i);
    }
    cout << endl;
  }
}
