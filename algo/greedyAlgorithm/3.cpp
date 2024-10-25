#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int x, a, b, c, d;
  int ans = 0;
  cin >> x;
  cin >> a >> b >> c >> d;

  while (x >= 50 && a > 0) {
    a--;
    x -= 50;
    ans++;
  }
  while (x >= 10 && b > 0) {
    b--;
    x -= 10;
    ans++;
  }
  while (x >= 5 && c > 0) {
    c--;
    x -= 5;
    ans++;
  }
  while (x >= 1 && d > 0) {
    d--;
    x -= 1;
    ans++;
  }

  cout << ans << endl;
}