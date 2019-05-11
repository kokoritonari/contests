#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; char op; cin >> a >> op >> b;
  int ans;
  if (op == '+') ans = a + b;
  else ans = a - b;
  cout << ans << endl;
}
