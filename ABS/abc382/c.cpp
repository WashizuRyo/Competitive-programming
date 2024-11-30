#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> a;
  vector<int> b(m);

  rep(i, n) {
    int t;
    cin >> t;
    a.push_back({t, i + 1});
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  rep(i, m) { cin >> b[i]; }

  rep(i, m) {
    rep(j, n) {
      if (b[i] >= a[j].first) {
        cout << a[j].second << endl;
        // a.pop_back(a[j]);
        break;
      }
      if (j == n - 1) cout << "-1" << endl;
    }
  }
}