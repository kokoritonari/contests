#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  cout << min(abs(a - b), abs(10 - max(a, b)) + abs(min(a, b))) << endl;
}
