#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, m; cin >> h >> m;
  double h_angle = 360 * (h % 12) / 12. + 30 * m / 60.;
  double m_angle = 360 * m / 60.;
  double diff_angle = abs(h_angle - m_angle);
  cout << min(diff_angle, 360 - diff_angle) << endl;
}
