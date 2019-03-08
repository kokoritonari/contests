#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int left, right, count = 0;
  for (int i = a; i <= b; i++) {
    left = i / 1000;
    right = i % 10;
    right *= 10;
    right += i / 10 % 10;
    if (left == right) {
      count++;
    }
  }
  cout << count << endl;
}
