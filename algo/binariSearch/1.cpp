#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  rep(i, m) {
    int ac = a.size();
    int wa = 0;
    while (ac != wa) {
      int wj = (ac + wa) / 2;
      if (a[wj] >= b[i]) {
        ac = wj;
      } else {
        wa = wj + 1;
      }
    }
    cout << ac << endl;
  }
}