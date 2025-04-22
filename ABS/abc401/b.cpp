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

  bool logged_in = false;
  int ans = 0;

  rep(i, n) {
    if (s[i] == "login")
      logged_in = true;
    else if (s[i] == "private" && !logged_in) {
      ans++;
    } else if (s[i] == "logout")
      logged_in = false;
  }

  cout << ans << endl;
}