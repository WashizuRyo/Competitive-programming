#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> ans(n);
  ans[0] = x;
  ans[1] = y;
  for (int i = 2; i < n; i++) {
    ans[i] = (ans[i - 2] + ans[i - 1]) % 100;
  }

  cout << ans[n - 1] << endl;
}