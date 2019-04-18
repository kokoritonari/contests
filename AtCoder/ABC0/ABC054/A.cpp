#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  if (a == 1) a = 14;
  if (b == 1) b = 14;
  cout << (a == b ? "Draw" : (a > b ? "Alice" : "Bob")) << endl;
  /*
  cout << (a == b ? "Draw" :
           a == 1 ? "Alice" :
           b == 1 ? "Bob" :
           a > b ? "Alice" : "Bob") << endl;
  */
}
