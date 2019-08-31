#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int first_number = stoi(s.substr(0, 2));
  int second_number = stoi(s.substr(2, 2));
  bool is_month_first = 0 < first_number && first_number < 13;
  bool is_month_second = 0 < second_number && second_number < 13;
  cout << (is_month_first && is_month_second ? "AMBIGUOUS" :
          (is_month_first ? "MMYY" :
          (is_month_second ? "YYMM" :
          "NA"))) << endl;
}
