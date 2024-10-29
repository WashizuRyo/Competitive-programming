#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));

  rep(i, n) {
    rep(j, m) { cin >> a[i][j]; }
  }

  rep(i, n) {
    int ans = 0;
    rep(j, m) { ans += a[i][j]; }
    cout << ans << endl;
  }
}