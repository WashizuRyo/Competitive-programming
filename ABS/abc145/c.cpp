#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n;
  double sum = 0, cnt = 0;
  cin >> n;
  vector<int> x(n), y(n), a(n);
  rep(i, n) {
    cin >> x[i] >> y[i];
    a[i] = i;
  }
  do {
    cnt++;
    rep(i, n - 1) { sum += sqrt(pow(x[a[i]] - x[a[i + 1]], 2) + pow(y[a[i]] - y[a[i + 1]], 2)); }
  } while (next_permutation(a.begin(), a.end()));
  cout << fixed << setprecision(10) << sum / cnt << endl;
}