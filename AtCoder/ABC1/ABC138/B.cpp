#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  double sum_of_inverse = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    sum_of_inverse += 1. / a;
  }
  double ans = 1. / sum_of_inverse;
  cout << scientific << setprecision(10) << ans << endl;
}
