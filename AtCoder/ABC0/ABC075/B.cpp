#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w; cin >> h >> w;
  string s[60];
  int dh[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dw[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int i = 0; i < h; i++) cin >> s[i];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '.') {
        int cnt = 0;
        for (int k = 0; k < 8; k++) {
          int y = i + dh[k];
          int x = j + dw[k];
          if (0 <= x && x <= w && 0 <= y && y <= h && s[y][x] == '#') cnt++;
        }
        s[i][j] = '0' + cnt;
      }
    }
  }
  for (int i = 0; i < h; i++) {
    cout << s[i] << endl;
  }
}
/*
  vector<vector<char>> s(h, vector<char>(w));
  vector<vector<int>> ans(h, vector<int>(w));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == '.') {
        int n = (  s.at(min(max(0, i - 1), h - 1)).at(min(max(0, j - 1), w - 1)) == '#'
                 + s.at(min(max(0, i - 1), h - 1)).at(min(max(0, j    ), w - 1)) == '#'
                 + s.at(min(max(0, i - 1), h - 1)).at(min(max(0, j + 1), w - 1)) == '#'
                 + s.at(min(max(0, i    ), h - 1)).at(min(max(0, j - 1), w - 1)) == '#'
                 + s.at(min(max(0, i    ), h - 1)).at(min(max(0, j    ), w - 1)) == '#'
                 + s.at(min(max(0, i    ), h - 1)).at(min(max(0, j + 1), w - 1)) == '#'
                 + s.at(min(max(0, i + 1), h - 1)).at(min(max(0, j - 1), w - 1)) == '#'
                 + s.at(min(max(0, i + 1), h - 1)).at(min(max(0, j    ), w - 1)) == '#'
                 + s.at(min(max(0, i + 1), h - 1)).at(min(max(0, j + 1), w - 1)) == '#');
                 cout << n << endl;
        ans[i][j] = n;
      } else {
        ans[i][j] = 10;
      }
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (ans[i][j] < 10) {
        cout << ans[i][j];
      } else {
        cout << "#";
      }
    }
    cout << endl;
  }
}
*/
