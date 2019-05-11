#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  vector<string> a(h);
  for (auto& e: a) cin >> e;

  for (int i = 0; i < w + 2; i++) cout << '#'; cout << endl;
  for (auto& e: a) cout << '#' << e << '#' << endl;
  for (int i = 0; i < w + 2; i++) cout << '#'; cout << endl;
}
