#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, d; cin >> a >> d;
  cout << (min(a, d) + 1) * max(a, d) << endl;
}
