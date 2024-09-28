#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <= (n); i++)
using P = pair<int, int>;

int main() {
  int n, s, m, l;
  cin >> n >> s >> m >> l;
  int ans = 10000000000;
  rep(a, 100) {
    rep(b, 100) {
      rep(c, 100) {
        if (a * 6 + b * 8 + c * 12 >= n) {
          ans = min(ans, a * s + b * m + c * l);
        }
      }
    }
  }
  cout << ans << endl;
}