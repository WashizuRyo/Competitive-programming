#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  ll ans = 0;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  rep(i, n) {
    int ok = n;
    int ng = -1;
    while (ok - ng > 1) {
      int mid = (ok + ng) / 2;
      if (a[i] + a[mid] >= k) {
        ok = mid;
      } else {
        ng = mid;
      }
    }
    ans += n - ok;
  }

  cout << ans << endl;
}