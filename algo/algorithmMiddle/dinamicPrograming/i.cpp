#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(n, vector<int>(3));
  vector<vector<int>> a(n, vector<int>(3));

  rep(i, n) {
    rep(j, 3) { cin >> a[i][j]; }
  }

  rep(i, n) {
    rep(j, 3) {
      if (i == 0) {
        dp[i][j] = a[i][j];
        continue;
      }
      if (j == 0) {
        dp[i][j] = max(dp[i - 1][1], dp[i - 1][2]) + a[i][j];
      } else if (j == 1) {
        dp[i][j] = max(dp[i - 1][2], dp[i - 1][0]) + a[i][j];
      } else if (j == 2) {
        dp[i][j] = max(dp[i - 1][1], dp[i - 1][0]) + a[i][j];
      }
    }
  }

  cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << endl;
}