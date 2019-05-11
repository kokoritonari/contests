#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  cout << (n % 1000 % 111 == 0 || n / 10 % 111 == 0 ? "Yes" : "No") << endl;
}
