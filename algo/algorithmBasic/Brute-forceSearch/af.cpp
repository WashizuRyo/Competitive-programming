#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int l, r;
  cin >> l >> r;

  int ans = 0;
  for (int i = l; i <= r; i++) {
    for (int j = i + 1; j <= r; j++) {
      if (i % 10 == j % 10) ans++;
    }
  }

  cout << ans << endl;
}