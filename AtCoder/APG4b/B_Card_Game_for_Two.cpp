#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards.at(i);
  }
  sort(cards.begin(), cards.end());

  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a += cards.at(i);
    } else {
      b += cards.at(i);
    }
  }

  int diff;
  diff = (a > b)? a - b : b - a;

  cout << diff << endl;
}
