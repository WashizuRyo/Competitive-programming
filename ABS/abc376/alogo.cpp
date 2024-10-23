#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

double judge(int x, int n) {
  double ans = n + 1;
  rep(i, 5) { ans = ans * x + 1; }
  return ans;
}

int main() {
  double n, m;
  cin >> n >> m;

  // auto judge = [&](int x) {
  //   if ((x * ((x * (x + 1)) + 2)) + 3 >= n) return true;
  //   return false;
  // };

  const double INF = 100;
  double ac = INF, wa = 0;
  while (ac - wa > 1e-4) {
    double wj = (ac + wa) / 2;
    if (judge(wj, n) > m)
      ac = wj;
    else
      wa = wj;
  }
  double ans = ac;
  cout << ans << endl;
}