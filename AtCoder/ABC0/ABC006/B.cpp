#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> t = {0, 0, 1};
  for (int i = 3; i < n; i++) t.push_back((t[i - 1] + t[i - 2] + t[i - 3]) % 10007);
  cout << t.at(n - 1) << endl;
}
