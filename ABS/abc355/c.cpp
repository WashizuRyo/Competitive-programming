#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<pair<int, bool>>> grid(n, vector<pair<int, bool>>(n, {0, false}));

  rep(i, n) {
    rep(j, n) { grid.insert({n * i + j + 1, false}); }
  }

  rep(i, t) {
    rep(j, n) {
      auto it = grid.find({a[i], false});
      grid.erase(it);
      grid.insert({a[i], true});
    }
  }

  // rep(i, n) { if () }

  for (auto point : grid) {
    cout << point.first << " ";
  }
}