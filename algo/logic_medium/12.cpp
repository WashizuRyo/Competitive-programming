#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    if (i % 2 == 0) {
      ans += (s[i] - '0');
    } else {
      ans += (s[i] - '0') * 2;
    }
  }
  cout << s << ans % 10 << endl;
}