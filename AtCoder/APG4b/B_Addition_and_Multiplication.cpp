#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, board = 1;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    if (board * 2 > board + k) {
      board += k;
    } else {
      board *= 2;
    }
  }
  cout << board << endl;
}
