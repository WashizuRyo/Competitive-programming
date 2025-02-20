#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m, ans;
  set<pair<int, int>> a;
  cin >> n >> m;
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    if (u == v) {
      ans++;
      continue;
    }
    if (u > v) {
      swap(u, v);
    }
    a.insert({u, v});
  }

  cout << (m - ans) - a.size() + ans << endl;
}