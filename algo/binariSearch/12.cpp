#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int f(double x, vector<int> L) {
  int ans = 0;
  for (auto l : L) {
    ans += (int)(l / x);
  }
  return ans;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> l(n);
  rep(i, n) cin >> l[i];

  double left = 0, right = 2e5;
  while (right - left >= 1e-8) {
    double mid = (left + right) / 2;
    if (f(mid, l) >= k) {
      left = mid;
    } else {
      right = mid;
    }
  }

  cout << fixed << setprecision(10) << left << endl;
  return 0;
}