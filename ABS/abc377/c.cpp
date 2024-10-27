#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m, a, b;
  cin >> n >> m;
  set<P> ans;
  const vector<int> massi = {2, 1, -1, -2, -2, -1, 1, 2, 0};
  const vector<int> massj = {1, 2, 2, 1, -1, -2, -2, -1, 0};

  rep(i, m) {
    cin >> a >> b;
    rep(k, 9) {
      int ni = a + massi[k];
      int nj = b + massj[k];
      if (ni >= 1 && ni <= n && nj >= 1 && nj <= n) {
        ans.insert({ni, nj});
      }
    }
  }
  ll nn = static_cast<ll>(n) * n;
  cout << nn - ans.size() << endl;
}