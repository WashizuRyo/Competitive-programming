#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k, ans = 1e9;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  rep(l, k + 1) {
    int r = l + (n - k) - 1;
    int minRange = a[r] - a[l];
    ans = min(minRange, ans);
  }

  cout << ans << endl;
}