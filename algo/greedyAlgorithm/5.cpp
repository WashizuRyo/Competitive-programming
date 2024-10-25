#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  rep(i, n) {
    rep(j, n) {
      if (j == i) continue;
      double target = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
      double distance = min(distance, target);
    }
  }
}