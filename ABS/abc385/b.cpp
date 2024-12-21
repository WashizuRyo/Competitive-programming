#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);

  rep(i, h) { cin >> s[i]; }

  string t;
  cin >> t;
  int count = 0, house = 0;
  x--;
  y--;
  vector<vector<int>> map(h, vector<int>(w, 0));
  rep(i, t.size()) {
    if (t[i] == 'U' && s[x - 1][y] != '#') {
      x--;
      if (s[x][y] == '@') {
        count++;
        s[x][y] = '.';
      }
    } else if (t[i] == 'D' && s[x + 1][y] != '#') {
      x++;
      if (s[x][y] == '@') {
        count++;
        s[x][y] = '.';
      }
    } else if (t[i] == 'L' && s[x][y - 1] != '#') {
      y--;
      if (s[x][y] == '@') {
        count++;
        s[x][y] = '.';
      }
    } else if (t[i] == 'R' && s[x][y + 1] != '#') {
      y++;
      if (s[x][y] == '@') {
        count++;
        s[x][y] = '.';
      }
    }
  }

  cout << x + 1 << " " << y + 1 << " " << count << endl;
}