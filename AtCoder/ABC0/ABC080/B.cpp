#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int f = 0;
  for (int i = n; i > 0; i /= 10) f += i % 10;
  cout << (n % f == 0 ? "Yes" : "No") << endl;
}
