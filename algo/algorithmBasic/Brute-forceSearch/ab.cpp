#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int ans = 0;
  rep(i, n - 1) {
    if (a[i - 1] <= a[i] && a[i] >= a[i + 1]) ans++;
  }

  cout << ans << endl;
}