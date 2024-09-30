#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, k, res = 0;
  cin >> n >> k;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  rep(bit, 1 << n) {

    vector<int> num(26, 0);
    int ans = 0;
    rep(i, n) {
      if (bit & (1 << i)) {
        for (char c : s[i])
          num[c - 'a']++;
      }
    }
    rep(j, 26) {
      if (num[j] == k) ans++;
    }
    res = max(res, ans);
  }
  cout << res << endl;
}