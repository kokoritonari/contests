#include <bits/stdc++.h>
using namespace std;
#define d int(1e9 + 7)

int main() {
  long a, b, c; cin >> a >> b >> c;
  long long ans = a * b % d * c % d;
  cout << ans << endl;
}
