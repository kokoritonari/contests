#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for (auto& e : a) cin >> e;
  int k; cin >> k;

  if (a.at(4) - a.at(0) > k) cout << ":(" << endl;
  else cout << "Yay!" << endl;
}
