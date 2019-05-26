#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (auto& e: v) cin >> e;
  for (int i = 0; i <= k; i++) {
    int sum = 0;
    vector<int> popl, popr, popm;
    for (int j = 0; j <= i; j++) {
      popl.push_back(v.at(j))
      if (v.at(j) < 0) popm.push_back(v.at(j));
      sum += v.at(j);
    }
    for (int j = n - 1; j > n - i; j--) {
      popr.push_back(v.at(j))
      if (v.at(j) < 0) popm.push_back(v.at(j));
      sum += v.at(j);
    }
    sort(popm.begin(), popm.end());
  }
}
