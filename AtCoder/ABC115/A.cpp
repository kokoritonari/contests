#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  cin >> d;
  string msg = "Christmas";

  for (int i = 0; i < 25 - d; i++) msg += " Eve";

  cout << msg << endl;
}
