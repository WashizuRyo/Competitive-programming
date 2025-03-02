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
  vector<int> cnt(1000005);
  int l = 0;
  int INF = numeric_limits<int>::max();
  int ans = INF;

  rep(r, n) {
    cnt[a[r]]++;

    while (cnt[a[r]] > 1) {
      ans = min(ans, r - l + 1);
      cnt[a[l]]--;
      l++;
    }
  }

  if (ans == INF) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}