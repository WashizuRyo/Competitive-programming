#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> dp(n + 1, 0);

  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= n; i++) {
    dp[i] = dp[i - 2] + dp[i - 1] + dp[i - 3];
  }

  cout << dp[n] << endl;
}