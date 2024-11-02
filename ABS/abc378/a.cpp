#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> aa = {a, b, c, d};
  int ac = 0, bc = 0, cc = 0, dc = 0;
  rep(i, 4) {
    if (aa[i] == 1)
      ac++;
    else if (aa[i] == 2)
      bc++;
    else if (aa[i] == 3)
      cc++;
    else if (aa[i] == 4)
      dc++;
  }
  int ans = 0;
  if (bc % 2 == 0 || bc / 2 >= 0) ans += bc / 2;
  if (ac % 2 == 0 || ac / 2 >= 0) ans += ac / 2;
  if (cc % 2 == 0 || cc / 2 >= 0) ans += cc / 2;
  if (dc % 2 == 0 || dc / 2 >= 0) ans += dc / 2;

  cout << ans << endl;
}