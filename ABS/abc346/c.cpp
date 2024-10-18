#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<bool> b(n, false);
  ll ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a >= 1 && a <= n) {
      b[a - 1] = true;
    }
  }
  rep(i, n) {
    if (b[i] == false) {
      ans += b[i];
    }
  }
  cout << ans << endl;
}