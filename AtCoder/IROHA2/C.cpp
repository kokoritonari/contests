#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> h(n);
  set<int> st;
  for (int& e: h) cin >> e, st.insert(e);
  // sort(st.begin(), st.end());
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (set<int>::iterator it = st.begin(); it != st.end(); it++, cnt++) {
      if (*it == h.at(i)) {
        cout << cnt << endl;
        break;
      }
    }
  }
}
