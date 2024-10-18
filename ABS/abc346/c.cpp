#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  vector<bool> b(k, false);
  ll ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a >= 1 && a <= k) {
      b[a - 1] = true;
      c[i] = a;
    }
  }

  ll accu = 0;
  for (int i = 1; i <= k; i++) {
    accu += i;
    if (b[i - 1] == true) {
      ans += i;
    }
  }
  cout << accu - ans << endl;
}