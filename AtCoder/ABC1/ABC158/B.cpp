#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, b, m; cin >> n >> a >> b;
  cout << n / (a + b) * a + (a < (m = n % (a + b)) ? a : m) << endl;
}
