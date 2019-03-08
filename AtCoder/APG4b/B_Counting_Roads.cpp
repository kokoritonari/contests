#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> town(n);
  int a, b;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    town.at(a-1)++;
    town.at(b-1)++;
  }
  for (int i = 0; i < n; i++) {
    cout << town.at(i) << endl;
  }
}
