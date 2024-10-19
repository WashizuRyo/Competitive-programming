#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  int l = 1, r = 2, ans = 0;
  vector<bool> boolR(n, false);
  vector<bool> boolL(n, false);
  rep(i, q) {
    char h;
    int t;
    cin >> h >> t;
    if (h == 'R') {
      if (r == t) {
        boolR[t] = true;
        continue;
      }
      if (t >= r && l >= r) {
        ans += r + n - t;
        r = t;
      } else if (r >= l && l >= t) {
        ans += t + n - r;
        r = t;
      } else {
        ans += abs(t - r);
        r = t;
      }
    } else if (h == 'L') {
      if (l == t) {
        boolL[t] = true;
        continue;
      }
      if (t >= r && r >= l) {
        ans += l + n - t;
        l = t;
      } else if (l >= r && r >= t) {
        ans += t + n - l;
        l = t;
      } else {
        ans += abs(t - l);
        l = t;
      }
    }
    if ((boolR[2] == true && boolL[1] == true) || boolR[2] == true && boolL[1] == true) {
      cout << "0" << endl;
      return 0;
    }
  }
  cout << ans << endl;
}