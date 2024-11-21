#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll n, m, ans = 0;
  cin >> n >> m;
  for (int x = 1; x <= n; x++) {
    for (int y = 1; y <= n; y++) {
      ll max_z = min(m - x - y, n);
      if (max_z <= 0) continue;
      ans += max_z;
    }
  }

  cout << ans << endl;
}