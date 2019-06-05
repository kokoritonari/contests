#include <bits/stdc++.h>
using namespace std;

int linearSearch(int A[], int n, int key) {
  int i = 0;
  A[n] = key;
  for (; A[i] != key; i++);
  if (i == n) return -1;
  return i;
}

int main() {
  int n; cin >> n;
  int A[100001];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  int q; cin >> q;
  int ans = 0;
  for (int i = 0; i < q; i++) {
    int t; cin >> t;
    if (linearSearch(A, n, t) != -1) ans++;
  }
  cout << ans << endl;
}
