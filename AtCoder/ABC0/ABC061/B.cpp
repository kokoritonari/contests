#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> roads(n);
  for (int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    roads.at(--a)++;
    roads.at(--b)++;
  }
  for (int e: roads) cout << e << endl;
}
