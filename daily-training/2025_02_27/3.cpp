#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> c(n);
  vector<string> d(m);
  vector<int> p(m + 1);
  unordered_map<string, int> data;
  rep(i, n) cin >> c[i];
  rep(i, m) cin >> d[i];
  rep(i, m + 1) cin >> p[i];

  for (int i = 0; i < m; i++) {
    data[d[i]] = p[i + 1];
  }

  int ans = 0;
  rep(i, n) {
    if (data.count(c[i]))
      ans += data[c[i]];
    else
      ans += p[0];
  }

  cout << ans << endl;
}