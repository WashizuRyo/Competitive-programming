#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;

  vector<vector<int>> dp(4, vector<int>(4));

  dp[0][0] = a1;
  dp[0][1] = a2;
  dp[0][2] = a3;
  dp[0][3] = a4;

  for (int i = 1; i < 4; ++i) {
    rep(j, 4) {
      int value = 0;
      if (i - 1 >= 0 && j - 1 >= 0) {
        value += dp[i - 1][j - 1];
      }

      if (i - 1 >= 0) {
        value += dp[i - 1][j];
      }

      if (i - 1 >= 0 && j + 1 < 4) {
        value += dp[i - 1][j + 1];
      }

      dp[i][j] = value;
    }
  }

  cout << dp[3][3] << endl;
}