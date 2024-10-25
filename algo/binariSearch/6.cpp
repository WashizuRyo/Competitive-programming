#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool judge(ll x, ll mid) {
  ll ans = (mid * (mid + 1)) / 2;
  if (ans >= x) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  cin >> n;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  rep(i, n) {
    ll ok = 3e9;
    ll ng = -1;
    while (ok - ng > 1) {
      ll mid = (ok + ng) / 2;
      if (judge(x[i], mid)) {
        ok = mid;
      } else {
        ng = mid;
      }
    }

    cout << ng + 1 << endl;
  }
}