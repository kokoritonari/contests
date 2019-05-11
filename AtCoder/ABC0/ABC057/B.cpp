#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<pair<int, int>> students(n);
  vector<pair<int, int>> checkpoints(m);
  vector<int> ans(n);

  int x, y;
  for (auto& e: students) cin >> x >> y, e = make_pair(x, y);
  for (auto& e: checkpoints) cin >> x >> y, e = make_pair(x, y);
  for (int i = 0; i < n; i++) {
    int min_idx = 0;
    int min_dst = abs(students[i].first - checkpoints[0].first)
                  + abs(students[i].second - checkpoints[0].second);
    for (int j = 0; j < m; j++) {
      int dst = abs(students[i].first - checkpoints[j].first)
                + abs(students[i].second - checkpoints[j].second);
      if (dst < min_dst) {
        min_dst = dst;
        min_idx = j;
      }
    }
    ans[i] = ++min_idx;
  }
  for (auto e: ans) cout << e << endl;
}
