#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  vector<int> a(n);
  cin >> n;
  int ans = 0;
  rep(i, n) cin >> a[i];
  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (max(a[i], max(a[j], a[k])) == a[j]) ans++;
      }
    }
  }

  cout << ans << endl;
}