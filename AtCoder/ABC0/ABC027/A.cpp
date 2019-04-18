#include <bits/stdc++.h>
using namespace std;

int main() {
  int l1, l2, l3; cin >> l1 >> l2 >> l3;
  cout << (l1 == l2 ? l3 : (l2 == l3 ? l1 : l2)) << endl;
}
