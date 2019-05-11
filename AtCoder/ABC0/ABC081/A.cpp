#include <bits/stdc++.h>
using namespace std;

int main() {
  int s; cin >> s;
  int ans = 0;
  for (int i = s; i > 0; i /= 10) ans += i % 10;
  cout << ans << endl;
}
