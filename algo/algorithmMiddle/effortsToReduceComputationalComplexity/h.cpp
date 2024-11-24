#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> d(n - 1), s(n + 1, 0);
  rep(i, n - 1) cin >> d[i];
  rep(i, n) s[i + 1] = s[i] + d[i];

  // rep(i, n) cout << s[i] << endl;

  int q;
  cin >> q;
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    cout << s[r] - s[l] << endl;
  }
}