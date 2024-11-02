#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, r, c, n;
  cin >> h >> w >> r >> c >> n;
  string t;
  cin >> t;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  rep(i, t.size()) {
    if (t[i] == 'L') {
      while (c > 0 && s[r][c - 1] != '#') {
        c--;
      }
    } else if (t[i] == 'R') {
      while (c < w - 1 && s[r][c + 1] != '#') {
        c++;
      }
    } else if (t[i] == 'U') {
      while (r > 0 && s[r - 1][c] != '#') {
        r--;
      }
    } else if (t[i] == 'D') {
      while (r < h - 1 && s[r + 1][c] != '#') {
        r++;
      }
    }
  }

  cout << r << " " << c << endl;
}