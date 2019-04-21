#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; string s; cin >> n >> s;
  int cntBlack = 0, cntWhite = 0;
  vector<int> blacks(n);
  vector<int> whites(n);
  for (int i = 0; i < n; i++) {
    if (s.at(i) == '#') cntBlack++;
    else cntWhite++;
    blacks.at(i) = cntBlack;
    whites.at(i) = cntWhite;
  }
  int minReverseN = 1e+9;
  for (int i = 0; i < n; i++) {
    minReverseN = min({minReverseN, blacks.at(i) + cntWhite - whites.at(i)});
  }
  cout << minReverseN << endl;
}
  /*
  bool isWhite = true;
  for (auto& e: s) {
    if (e == '#') {
      isWhite = false;
    }
    if (!isWhite && e == '.') {
      cntBlack++;
    }
    if (e == '#') {
      cntWhite++;
    }
  }
  cout << (isWhite ? 0 : min(cntBlack, cntWhite)) << endl;
}
*/
