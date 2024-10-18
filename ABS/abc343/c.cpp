#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool check(ll n) {
  string s = to_string(n);
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
  ll n;
  cin >> n;

  vector<ll> r;

  ll ans = 0;
  for (ll i = 1; i * i * i <= n; i++) {
    if (check(i * i * i)) {
      ans = i * i * i;
    }
  }

  cout << ans << endl;
}