#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  rep(i, n) {
    int count = 0;
    for (int j = 1; j <= a[i]; j++) {
      if (a[i] % j == 0) count++;
    }
    if (count == 2) ans++;
  }

  cout << ans << endl;
}