#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  int ans = 0;
  rep(i, n) {
    rep(j, m) {
      if (a[i] > b[j]) ans++;
    }
  }

  cout << ans << endl;
}