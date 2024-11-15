#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  vector<string> t(h);

  rep(i, h) cin >> s[i];
  rep(i, h) cin >> t[i];

  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (s[i][j] != t[i][j]) ans++;
    }
  }

  cout << ans << endl;
}