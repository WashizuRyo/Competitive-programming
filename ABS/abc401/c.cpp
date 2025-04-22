#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n + 1);
  a[0] = 1;
  ll sum = a[0];
  const int mod = 1e9;

  for (int i = 1; i <= n; i++) {
    a[i] = sum % mod;
    if (i < k) {
      sum += a[i];
    } else {
      sum += a[i];
      sum -= a[i - k];
    }
  }

  cout << a[n] % mod << endl;
}