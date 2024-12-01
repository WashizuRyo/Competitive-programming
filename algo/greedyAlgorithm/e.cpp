#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  rep(i, n - 1) {
    if (a[i] > a[i + 1]) {
      ans += a[i] - a[i + 1];
      a[i + 1] += a[i] - a[i + 1];
    }
  }

  cout << ans << endl;
}