#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(n, vector<int>(n, 0));

  dp[0][0] = 1;

  rep(i, n) {
    rep(j, n) {
      int value = 0;
      if (j - 1 >= 0) {
        dp[i][j] += dp[i][j - 1];
      }

      if (i - 1 >= 0) {
        dp[i][j] += dp[i - 1][j];
      }
    }
  }

  cout << dp[n - 1][n - 1] << endl;
}