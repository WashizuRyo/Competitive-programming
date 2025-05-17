#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);

  rep(i, n) cin >> a[i];

  __int128 ans = 1;
  ll keta = 1;
  rep(i, k) keta *= 10;

  rep(i, n) {
    ans *= a[i];
    if (ans >= keta) {
      ans = 1;
    }
  }

  cout << (ll)ans << endl;
}