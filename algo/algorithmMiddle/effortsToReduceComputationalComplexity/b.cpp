#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  sort(a.begin(), a.end());
  for (int i = 1; i < n; i++)
    ans += a[i];
  cout << ans << endl;
}