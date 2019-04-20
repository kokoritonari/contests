#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main() {
  int n, t; cin >> n >> t;
  int minc = INF;
  for (int i = 0; i < n; i++) {
    int c, time; cin >> c >> time;
    if (t >= time && minc > c) minc = c;
  }
  cout << (minc != INF ? to_string(minc) : "TLE") << endl;
}
