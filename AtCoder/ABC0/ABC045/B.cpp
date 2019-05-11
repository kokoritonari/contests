#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(3); for (auto& e: s) cin >> e;
  char pastcard = s.at(0).at(0);
  vector<int> idx = {1, 0, 0};
  char ans;
  while (true) {
    int nowplayer = pastcard - 'a';
    if (!(s.at(nowplayer).size() > idx.at(nowplayer))) {
      ans = nowplayer + 'A';
      break;
    }
    pastcard = s.at(nowplayer).at(idx.at(nowplayer));
    idx.at(nowplayer)++;
  }
  cout << ans << endl;
}
