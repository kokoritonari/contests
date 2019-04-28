#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (a < b) gcd(b, a);
  int r;
  while (r = a % b) {
    a = b;
    b = r;
  }
  return b;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int& e: a) cin >> e;

  if (n == 2) {
    cout << max(a.at(0), a.at(1)) << endl;
    return 0;
  }

  int gcd01 = gcd(a.at(0), a.at(1));
  int gcd02 = gcd(a.at(0), a.at(2));
  int gcd12 = gcd(a.at(1), a.at(2));
  int tmp, miner, minidx;
  if (gcd01 == gcd02) {
    miner = tmp = gcd12;
    minidx = 0;
  } else if (gcd01 == gcd12){
    miner = tmp = gcd02;
    minidx = 1;
  } else {
    miner = tmp = gcd01;
    minidx = 2;
  }

  int ans = miner;

  for (int i = 0; i < n; i++) {
    int tmp = gcd(miner, a.at(i));
    if (miner > tmp) {
      miner = tmp;
      minidx = i;
    }
  }

  for (int i = 0; i < n; i++) {
    if (i == minidx) continue;
    ans = gcd(ans, a.at(i));
  }
  cout << ans << endl;
}
