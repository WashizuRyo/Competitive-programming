#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), ans(9);
  rep(i, n) cin >> a[i];
  rep(i, n) { ans[a[i] - 1]++; }

  rep(i, 9) { cout << ans[i] << endl; }
}