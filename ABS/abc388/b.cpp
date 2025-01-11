#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> t(n), l(n);
  rep(i, n) { cin >> t[i] >> l[i]; }

  for (int i = 1; i <= d; i++) {
    int maxv = -1;
    rep(j, n) { maxv = max(t[j] * (l[j] + i), maxv); }
    cout << maxv << endl;
  }
}