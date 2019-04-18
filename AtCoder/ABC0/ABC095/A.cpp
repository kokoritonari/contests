#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s; int c = 0;
  for (char e : s) if (e - 'x') c++;
  cout << (7 + c) * 100 << endl;
}
