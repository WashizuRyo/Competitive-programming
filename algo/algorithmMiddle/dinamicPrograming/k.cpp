#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<vector<int>> dp(n, vector<int>(n, 0));

  rep(i, n) { cin >> s[i]; }

  dp[0][0] = 1;

  rep(i, n) {
    rep(j, n) {
      if (j - 1 >= 0 && s[i][j - 1] == '.') {
        dp[i][j] += dp[i][j - 1];
      }

      if (i - 1 >= 0 && s[i - 1][j] == '.') {
        dp[i][j] += dp[i - 1][j];
      }
    }
  }

  cout << dp[n - 1][n - 1] << endl;
}