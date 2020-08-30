#include <bits/stdc++.h>
using namespace std;

int main() {
  string n; cin >> n;
  int sum = 0;
  for (auto e: n) {
    sum += e - '0';
  }
  cout << (sum % 9 == 0 ? "Yes" : "No") << endl;
}
