#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> x(m);
  vector<ll> a(m);
  rep(i, m) cin >> x[i];
  rep(i, m) cin >> a[i];

  ll ans = 0;
  rep(i, m - 1) {
    ll d = x[i + 1] - x[i] - 1;
    if (d >= a[i] - 1) {
      ans += ((a[i] - 1) * (a[i])) / 2;
    } else {
      cout << "-1" << endl;
      return 0;
    }
  }

  if (n - x[m - 1] <= a[m - 1]) {
    ans += ((n - x[m - 1]) * (n - x[m - 1] + 1)) / 2;
  } else {
    cout << "-1" << endl;
    return 0;
  }

  cout << ans << endl;
}