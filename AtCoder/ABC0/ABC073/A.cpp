#include <bits/stdc++.h>
using namespace std;

int main() {
  string n; cin >> n;
  for (char c : n) if (c == '9') {cout << "Yes" << endl; return 0;}
  cout << "No" << endl;
}
