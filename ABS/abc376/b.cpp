#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int f(int n, int from, int to, int x) {
  if (from > to) swap(from, to);
  if (from < x && x < to) {
    return from + n - to;
  } else {
    return to - from;
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  int l = 1, r = 2, ans = 0;
  rep(i, q) {
    char h;
    int t;
    cin >> h >> t;
    if (h == 'R') {
      ans += f(n, r, t, l);
      r = t;
    } else {
      ans += f(n, l, t, r);
      l = t;
    }
  }
  cout << ans << endl;
}