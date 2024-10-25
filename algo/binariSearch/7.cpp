#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool judge(double mid, int k, vector<double> L) {
  double ans = 0;
  for (double l : L) {
    ans += int(l / mid);
  }

  if (ans >= k) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<double> l(n);
  rep(i, n) cin >> l[i];
  double ans = 0;
  rep(i, n) {
    double ng = 2e5;
    double ok = -1;
    while (ng - ok > 1e-8) {
      double mid = (ok + ng) / 2;
      if (judge(mid, k, l)) {
        ok = mid;
      } else {
        ng = mid;
      }
    }

    ans += ok;
  }

  cout << ans << endl;
}