#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> button(n);
  for (int i = 0; i < n; i++) {
    cin >> button.at(i);
    button.at(i)--;
  }

  int count = 0, index = 0;
  while (true) {
    if (count > n) {
      cout << -1 << endl;
      break;
    }
    if (index == 1) {
      cout << count << endl;
      break;
    }
    index = button.at(index);
    count++;
  }
}
