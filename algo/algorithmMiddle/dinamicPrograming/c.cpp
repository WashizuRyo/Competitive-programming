#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> t(n);

  t[0] = 0;
  t[1] = a[1];

  for (int i = 2; i < n; ++i) {
    int best = 10e7;
    for (int j = 1; j <= m; j++) {
      if (i - j > -1) {
        best = min(t[i - j] + j * a[i], best);
      }
    }
    t[i] = best;
  }

  cout << t[n - 1] << endl;
}