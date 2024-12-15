#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

double judge(double mid, double n) {
  double ans = n + 1;
  rep(i, 5) { ans = ans * mid + 1; }

  return ans;
}

int main() {
  double n, m;
  cin >> n >> m;

  double ac = 100, wa = 0;
  while (ac - wa > 1e-8) {
    double mid = (ac + wa) / 2;
    if (judge(mid, n) < m) {
      wa = mid;
    } else {
      ac = mid;
    }
  }

  double ans = ac;
  cout << ans << endl;
}