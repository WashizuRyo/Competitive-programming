#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> d(m);
  rep(i, m) { cin >> d[i]; }

  vector<bool> dp(n + 1, false);

  dp[0] = true;

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (i - d[j] >= 0 && dp[i - d[j]]) {
        dp[i] = true;
      }
    }
  }

  cout << (dp[n] ? "Yes" : "No") << endl;
}