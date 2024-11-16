#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll ans = 1001001001001001;
  rep(i, n - k + 1) {
    ll minv = a[i];
    ll maxv = a[i + k - 1];
    ans = min(maxv - minv, ans);
  }

  cout << ans << endl;
}