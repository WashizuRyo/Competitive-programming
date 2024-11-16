#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<ll, ll>;

int main() {
  ll n, k;
  vector<P> rice(n);
  cin >> n >> k;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    rice[i] = {a, b};
  }

  sort(rice.begin(), rice.end());

  ll count = 0;
  ll ans = 0;
  ll nk = k;
  for (auto p : rice) {
    if (nk <= p.second) {
      ans += p.first * nk;
      // cout << p.first << nk << endl;
      count += nk;
    } else {
      ans += p.first * p.second;
      count += p.second;
      nk -= p.second;
    }

    if (count == k) break;
  }

  cout << ans << endl;
}