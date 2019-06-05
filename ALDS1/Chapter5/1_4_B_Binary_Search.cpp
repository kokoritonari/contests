#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int n, int key) {
  int left = 0, right = n;
  int mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (A[mid] == key) {
      return mid;
    } else if (key < A[mid]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  return -1;
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
    if (binarySearch(A, n, t) != -1) ans++;
  }
  cout << ans << endl;
}
