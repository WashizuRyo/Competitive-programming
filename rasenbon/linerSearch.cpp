#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n;
  vector<int> s(n);
  rep(i, n) { cin >> s[i]; }
  cin >> q;
  vector<int> t(q);
  rep(i, q) { cin >> t[i]; }

  int ans = 0;
  rep(i, q) {
    rep(j, n) {
      if (t[i] == s[j]) {
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
}