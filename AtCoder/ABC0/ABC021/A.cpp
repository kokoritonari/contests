#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a;
  int c = 0;
  while (n > 0) {
    int rest = n % 2;
    a.push_back(rest);
    if (rest) c++;
    n /= 2;
  }
  cout << c << endl;
  for (int i = 0; i < a.size(); i++) if (a.at(i) != 0) cout << a.at(i) * pow(2, i) << endl;
}
