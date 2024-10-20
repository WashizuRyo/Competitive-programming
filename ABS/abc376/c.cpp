#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n - 1) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  auto judge = [&](int x) {
    auto nb = b;
    nb.push_back(x);
    sort(nb.begin(), nb.end());
    rep(i, n) if (a[i] > nb[i]) return false;
    return true;
  };

  const int INF = 1001001001;
  int ac = INF, wa = 0;
  while (ac - wa > 1) {
    int wj = (ac + wa) / 2;
    if (judge(wj))
      ac = wj;
    else
      wa = wj;
  }

  if (ac == INF)
    cout << -1 << endl;
  else
    cout << ac << endl;
  return 0;
}