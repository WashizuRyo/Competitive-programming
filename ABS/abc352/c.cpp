#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  int maxHeadHeight = 0;
  rep(i, n) maxHeadHeight = max(maxHeadHeight, b[i] - a[i]);
  long long ans = maxHeadHeight;
  rep(i, n) ans += a[i];
  cout << ans << endl;
}