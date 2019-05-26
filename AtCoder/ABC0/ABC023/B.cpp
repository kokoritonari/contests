#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; string s; cin >> n >> s;
  if (n % 2 == 0) {
    cout << -1 << endl;
    return 0;
  }
  list<char> li;
  li.push_back('b');
  for (int i = 0; i < n / 2; i++) {
    if (i % 3 == 0) {
      li.push_front('a');
      li.push_back('c');
    } else if (i % 3 == 1) {
      li.push_front('c');
      li.push_back('a');
    } else {
      li.push_front('b');
      li.push_back('b');
    }
  }
  string t;
  for (char& e: li) t.push_back(e);
  if (s == t) {
    cout << n / 2 << endl;
  } else {
    cout << -1 << endl;
  }
}
