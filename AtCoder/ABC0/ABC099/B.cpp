#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int hight = 0;
  for (int i = 1; i < b - a; i++) hight += i;
  cout << hight - a << endl;
}
