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

  dp[0][0] = a[0][0];
  rep(i, n) {
    rep(j, n) {
      if (i == 0 && j == 0) continue;
      int left = 0, down = 0;
      if (j - 1 >= 0) {
        left = dp[i][j - 1];
      }

      if (i - 1 >= 0) {
        down = dp[i - 1][j];
      }

      dp[i][j] = max(left, down) + a[i][j];
    }
  }

  cout << dp[n - 1][n - 1] << endl;
}