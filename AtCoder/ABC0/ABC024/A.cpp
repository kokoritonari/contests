#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k, s, t; cin >> a >> b >> c >> k >> s >> t;
  int fee = a * s + b * t;
  cout << (s + t < k ? fee : fee - (s + t) * c) << endl;
}
