#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> mochi(n);
  for (int i = 0; i < n; i++) {
    cin >> mochi.at(i);
  }

  vector<int> unique;
  for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = 0; j < unique.size(); j++) {
      if (mochi.at(i) == unique.at(j)) {
        flag = false;
      }
    }
    if (flag) {
      unique.push_back(mochi.at(i));
    }
  }
  cout << unique.size() << endl;
}
