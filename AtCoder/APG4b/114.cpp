#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int tall = max(max(A, B), C);
  int low = min(min(A, B), C);

  cout << tall - low << endl;
}
