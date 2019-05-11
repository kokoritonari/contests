#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  cout << (n == 0 ? k : int(k * pow(k - 1, n - 1))) << endl;
}
