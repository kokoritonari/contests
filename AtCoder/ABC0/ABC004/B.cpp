#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char>> c(4, vector<char>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> c.at(i).at(j);
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j) cout << " ";
      cout << c.at(3 - i).at(3 - j);
    }
    cout << endl;
  }
}
