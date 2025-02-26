#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> ans(n, vector<int>(n));

  rep(i, n) {
    for (int j = 0; j < i + 1; j++) {
      if (j == 0 || j == i) {
        ans[i][j] = 1;
      } else {
        ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
      }
    }
  }

  rep(i, n) {
    rep(j, n) {
      if (ans[i][j] == 0) {
        continue;
      }
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}