#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(n, vector<int>(n));
  rep(i, n) {
    int t;
    cin >> t;
    dp[0][i] = t;
  }

  for (int i = 1; i < n; ++i) {
    rep(j, n) {
      int value = 0;
      if (i - 1 >= 0 && j - 1 >= 0) {
        value += dp[i - 1][j - 1];
      }

      if (i - 1 >= 0) {
        value += dp[i - 1][j];
      }

      if (i - 1 >= 0 && j + 1 < n) {
        value += dp[i - 1][j + 1];
      }

      dp[i][j] = value % 100;
    }
  }

  cout << dp[n - 1][n - 1] << endl;
}