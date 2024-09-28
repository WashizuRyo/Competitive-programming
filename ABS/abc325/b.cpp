#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> w(n);
  vector<int> x(n);
  rep(i, n) cin >> w[i] >> x[i];
  for (int t = 0; t <= 23; t++) {
    int cnt = 0;
    rep(i, n) {
      int real_t = (t + x[i]) % 24;
      if (real_t >= 9 && real_t <= 17) {
        cnt += w[i];
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}