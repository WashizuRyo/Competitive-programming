#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  int a = h, b = 0, c = w, d = 0;
  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') {
        a = min(a, i), b = max(b, i);
        c = min(c, j), d = max(d, j);
      }
    }
  }

  for (int i = a; i <= b; i++) {
    for (int j = c; j <= d; j++) {
      if (s[i][j] == '.') {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}
