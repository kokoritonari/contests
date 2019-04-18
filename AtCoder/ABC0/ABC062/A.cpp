#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
  int x, y; cin >> x >> y;
  cout << (a[x] == a[y] ? "Yes" : "No") << endl;
}
/*
int group(int);

int main() {
  int x, y; cin >> x >> y;
  cout << (group(x) == group(y) ? "Yes" : "No") << endl;
}

int group(int x) {
  if (x <= 7) {
    if (x % 2 == 1) {
      return 1;
    } else {
      if (x == 2) {
        return 3;
      } else {
        return 2;
      }
    }
  } else {
    if (x % 2 == 0) {
      return 1;
    } else {
      return 2;
    }
  }
}
*/
