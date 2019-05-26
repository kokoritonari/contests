#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  set<int> st;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (st.count(a)) ans++;
    st.insert(a);
  }
  cout << ans << endl;
}
