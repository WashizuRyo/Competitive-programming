#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, q;
  cin >> h >> w >> q;
  vector<vector<bool>> square(h, vector<bool>(w, false));
  rep(i, q) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int k = a; k <= c; k++) {
      for (int j = b; j <= d; j++) {
        square[k][j] = true;
      }
    }
  }

  int ans = 0;
  rep(i, h) rep(j, w) {
    if (square[i][j] == true) ans++;
  }

  cout << ans << endl;
}