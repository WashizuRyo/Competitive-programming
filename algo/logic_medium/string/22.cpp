#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  string ans = "";
  rep(i, n) {
    rep(j, 1) { ans.push_back(toupper(s[i][j])); }
  }
  cout << ans << endl;
}