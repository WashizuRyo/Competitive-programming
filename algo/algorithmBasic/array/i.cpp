#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, p, q;
  cin >> h >> w;
  vector<string> s(h);

  rep(i, h) cin >> s[i];
  cin >> p >> q;

  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (i == p && s[i][j] == '#' || j == q && s[i][j] == '#') ans++;
    }
  }

  cout << ans << endl;
}