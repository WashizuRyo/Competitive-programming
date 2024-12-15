#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

double judge(double x, double n) { return (x * ((x * (x + 1)) + 2)) + 3; }

int main() {
  double n;
  cin >> n;
  double ac = -1, wa = 101;

  while (wa - ac > 1e-4) {
    double mid = (ac + wa) / 2;
    if (judge(mid, n) < n) {
      ac = mid;
    } else {
      wa = mid;
    }
  }
  double ans = ac;
  cout << ans << endl;
}