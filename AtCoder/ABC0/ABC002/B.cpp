#include <bits/stdc++.h>
using namespace std;

int main() {
  string w; cin >> w;
  string ans;
  for (int i = 0; i < w.size(); i++) {
    switch (w.at(i)) {
      case 'a': case 'e': case 'i': case 'o': case 'u': break;
      default: ans.push_back(w.at(i));
    }
  }
  cout << ans << endl;
}
