#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int count = 0;
  bool can;
  do {
    can = true;
    for (int i = 0; i < n; i++) {
      if (a.at(i) % 2 == 1) {
        can = false;
      }
    }

    if (can == true) {
      count++;
      for (int i = 0; i < n; i++) {
        a.at(i) >>= 1;
      }
    }
  } while (can);

  cout << count << endl;
}
