#include <bits/stdc++.h>
using namespace std;

int main() {
  char present; cin >> present;
  char next;
  bool is_good = true;
  for (int i = 0; i < 3; i++) {
    cin >> next;
    if (present == next) is_good = false;
    present = next;
  }
  cout << (is_good ? "Good" : "Bad") << endl;
}
