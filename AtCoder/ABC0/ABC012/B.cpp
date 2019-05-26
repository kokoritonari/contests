#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> t = {n / 3600, n / 60 % 60, n % 60};
  for (int i = 0; i < 3; i++) {
    if (i) cout << ":";
    cout << setfill('0') << setw(2) << t.at(i);
  }
  cout << endl;
}
