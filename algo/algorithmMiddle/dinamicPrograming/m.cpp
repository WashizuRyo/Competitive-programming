#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, 0));
  vector<vector<int>> dp(n, vector<int>(n, 0));

  rep(i, n) {
    rep(j, n) { cin >> a[i][j]; }
  }

  dp[0][n - 1] = a[0][n - 1];

  rep(i, n) {
    for (int j = n - 1; j >= 0; --j) {
      if (i == 0 && j == n - 1) continue;
      int right = 0, up = 0;
      if (j + 1 < n) {
        right = dp[i][j + 1];
      }

      if (i - 1 >= 0) {
        up = dp[i - 1][j];
      }

      if (right != 0 && up != 0) {
        dp[i][j] = min(right, up) + a[i][j];
      } else {
        dp[i][j] = (right + up) + a[i][j];
      }
    }
  }
  cout << dp[n - 1][0] << endl;
}