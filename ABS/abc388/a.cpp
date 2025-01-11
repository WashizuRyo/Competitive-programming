#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }

  int ans = 0;
  rep(i, n) {
    auto it = lower_bound(a.begin() + i, a.end(), a[i] * 2);
    if (it != a.end()) {
      ans += n - (it - a.begin());
    }
  }

  cout << ans << endl;
}