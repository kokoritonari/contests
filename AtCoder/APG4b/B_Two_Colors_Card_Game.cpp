#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;

  cin >> n;
  vector<string> blue(n);
  for (int i = 0; i < n; i++) {
    cin >> blue.at(i);
  }

  cin >> m;
  vector<string> red(m);
  for (int i = 0; i < m; i++) {
    cin >> red.at(i);
  }
  
  int max = -100;
  for (int i = 0; i < n; i++) {
    int count = 0;
    int plus = 0;
    for (int j = 0; j < n; j++) {
      if (blue.at(i) == blue.at(j)) {
        plus++;
      }
    }
    count += plus;

    int minus = 0;
    for (int j = 0; j < m; j++) {
      if (blue.at(i) == red.at(j)) {
        minus++;
      }
    }
    count -= minus;

    max = (count > max)? count : max;
  }
  max = (0 > max)? 0 : max;
  cout << max << endl;
}
