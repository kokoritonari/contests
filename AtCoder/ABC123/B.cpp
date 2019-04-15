#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  vector<int> b(5);
  for (auto& e : a) cin >> e;
  for (int i = 0; i < 5; i++) b.at(i) = (a.at(i) - 1) % 10;
  min(b);
  //int iter = find(b.begin(), b.end(), 8);
  // int index = distance'(b.begin(), iter);
  // cout << index << endl;
}
