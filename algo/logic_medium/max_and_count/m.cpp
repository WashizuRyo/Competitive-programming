#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  vector<int> l(q), r(q), plan_count(1001, 0);
  rep(i, q) cin >> l[i] >> r[i];

  rep(i, q) {
    for (int j = l[i]; j <= r[i]; j++) {
      plan_count[j]++;
    }
  }

  rep(i, 1001) {
    if (plan_count[i] >= 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}