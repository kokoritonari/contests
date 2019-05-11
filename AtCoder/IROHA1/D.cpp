#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<int> a(n);
  for (int& e: a) cin >> e;
  sort(a.rbegin(), a.rend());

  for (int i = 0; i < n; i++) {
    if (i & 1) y += a.at(i);
    else x += a.at(i);
  }
  cout << (x > y ? "Takahashi" : (x < y ? "Aoki" : "Draw")) << endl;
}
