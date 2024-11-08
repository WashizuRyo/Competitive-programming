#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  vector<int> a(x), b(y), c(z);
  rep(i, x) cin >> a[i];
  rep(i, y) cin >> b[i];
  rep(i, z) cin >> c[i];

  int ans = 0;
  rep(i, x) {
    rep(j, y) {
      rep(l, z) {
        if (a[i] + b[j] == c[l]) ans++;
      }
    }
  }

  cout << ans << endl;
}