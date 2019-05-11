#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int& e: a) cin >> e;
  sort(a.begin(), a.end());
  cout << a.back() - a.front() << endl;
}
