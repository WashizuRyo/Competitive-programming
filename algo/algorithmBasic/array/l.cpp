#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, sx, sy;
  cin >> h >> w >> sx >> sy;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int n;
  cin >> n;
  string t;
  cin >> t;

  rep(i, n) {
    if (t[i] == 'U') {
      if (sx - 1 >= 0 && s[sx - 1][sy] != '#') {
        sx--;
      }
    } else if (t[i] == 'D') {
      if (sx + 1 < h && s[sx + 1][sy] != '#') {
        sx++;
      }
    } else if (t[i] == 'L') {
      if (sy - 1 >= 0 && s[sx][sy - 1] != '#') {
        sy--;
      }
    } else if (t[i] == 'R') {
      if (sy + 1 < w && s[sx][sy + 1] != '#') {
        sy++;
      }
    }
  }

  cout << sx << " " << sy << endl;
}