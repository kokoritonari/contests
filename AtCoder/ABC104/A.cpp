#include <bits/stdc++.h>
using namespace std;

int main() {
  int r; cin >> r;
  cout << "A" + string("GRB").substr((r < 1200)+(r < 2800), 1) + "C" << endl;
}
