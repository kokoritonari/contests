#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, q; cin >> n >> m >> q;
  vector<vector<int>> edges(n, vector<int>());
  for (int i = 0; i < m; i++) {
    int u, v; cin >> u >> v;
    u--, v--;
    edges.at(u).push_back(v);
    edges.at(v).push_back(u);
  }

  vector<int> nodes(n);
  for (int i = 0; i < n; i++) {
    cin >> nodes.at(i);
  }

  for (int i = 0; i < q; i++) {
    int c, x; cin >> c >> x; x--;
    cout << nodes.at(x) << endl;

    if (c == 1) {
      for (auto e: edges.at(x)) {
        nodes.at(e) = nodes.at(x);
      }
    } else {
      int y; cin >> y;
      nodes.at(x) = y;
    }
  }
}