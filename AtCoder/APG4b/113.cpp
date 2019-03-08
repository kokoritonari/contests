#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  int mean = sum / N;
  for (int i = 0; i < N; i++) {
    if (mean > vec.at(i)) {
      cout << mean - vec.at(i) << endl;
    } else {
      cout << vec.at(i) - mean << endl;
    }
  }
}
