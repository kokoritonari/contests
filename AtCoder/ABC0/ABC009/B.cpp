#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    st.insert(a);
  }
  vector<int> vec;
  for (int e: st) vec.push_back(e);
  sort(vec.rbegin(), vec.rend());
  cout << vec.at(1) << endl;
}
