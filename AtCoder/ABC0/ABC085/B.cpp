#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  set<int> d;
  for (int i = 0; i < n; i++) {
    int e; cin >> e;
    d.insert(e);
  }
  cout << d.size() << endl;
}
