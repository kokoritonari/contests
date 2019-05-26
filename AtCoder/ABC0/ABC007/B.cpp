#include <bits/stdc++.h>
using namespace std;

int main() {
  string a; cin >> a;
  if (a.size() > 1) {
    cout << a.substr(0, a.size() - 1) << endl;
  } else if (a != "a") {
    cout << char(a[0] - 'b' + 'a') << endl;
  } else {
    cout << -1 << endl;
  }
}
