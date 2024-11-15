#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, q;
  cin >> h >> w;
  vector<string> s(h);

  rep(i, h) cin >> s[i];
  cin >> q;
  vector<int> ans(q, 0);
  rep(k, q) {
    int x, y;
    cin >> x >> y;
    if (x - 1 >= 0 && s[x - 1][y] == '#') ans[k]++;
    if (x + 1 < h && s[x + 1][y] == '#') ans[k]++;
    if (y - 1 >= 0 && s[x][y - 1] == '#') ans[k]++;
    if (y + 1 < w && s[x][y + 1] == '#') ans[k]++;
  }

  rep(i, q) { cout << ans[i] << endl; }
}