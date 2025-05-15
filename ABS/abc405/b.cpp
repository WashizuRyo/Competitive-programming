#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  vector<int> a(n);
  vector<bool> b(m, false);
  rep(i, n) cin >> a[i];

  for (int i = 0; i < n; i++) {
    if (1 <= a[i] && a[i] <= m && !b[a[i]]) {
      b[a[i]] = true;

      if (cnt == m - 1) {
        cout << n - i << endl;
        return 0;
      }
      cnt++;
    }
  }

  cout << 0 << endl;
  return 0;
}