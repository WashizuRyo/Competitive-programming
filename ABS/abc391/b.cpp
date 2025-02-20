#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n), t(m);

  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];

  rep(i, m) {
    rep(j, m) {
      rep(a, n - m + 1) {
        rep(b, n - m + 1) {
          // cout << s[a + i][b + j] << t[i][j] << endl;
          if (s[a + i - 1][b + j - 1] == t[i][j]) {
            cout << a << b << endl;
            return 0;
          }
        }
      }
    }
  }

  return 0;
}