#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, e;
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    cin >> s >> e;
    sum += s * e / 10;
  }
  cout << sum << endl;
}
