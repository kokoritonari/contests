#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, dim; cin >> n >> dim;
  vector<vector<int>> x(n, vector<int>(dim));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < dim; j++) {
      cin >> x.at(i).at(j);
    }
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum_of_square = 0;
      for (int d = 0; d < dim; d++) {
        sum_of_square += pow(x.at(i).at(d) - x.at(j).at(d), 2);
      }
      if (sum_of_square == pow(int(sqrt(sum_of_square)), 2)) {
        ans++;
      }
    }
  }
  cout << ans << endl;
}
