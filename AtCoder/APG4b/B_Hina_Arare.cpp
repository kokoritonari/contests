#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  bool f = false;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "Y") {
      f = true;
      break;
    }
  }
  if (f) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }
}
