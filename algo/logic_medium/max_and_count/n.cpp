#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  vector<int> l(q), r(q), plan_count(1001, 0), schedule(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<bool> canSchedule(q, true);
  rep(i, q) {
    for (int j = l[i]; j <= r[i]; j++) {
      if (plan_count[j]) {
        canSchedule[i] = false;
        break;
      }
    }

    if (canSchedule[i]) {
      for (int j = l[i]; j <= r[i]; j++) {
        plan_count[j]++;
      }
    }
  }

  rep(i, q) {
    if (canSchedule[i]) {
      cout << "OK" << endl;
    } else {
      cout << "NG" << endl;
    }
  }
}
