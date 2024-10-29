#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n), t(n), ans(n);

  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];

  rep(i, n) {
    rep(j, m) {
      if (s[i][j] == '#' || t[i][j] == '#') {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
}