#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<string, int> s;
  rep(i, n) {
    string ss;
    cin >> ss;
    if (s.count(ss) == 0) {
      s.emplace(ss, 1);
    } else {
      s[ss]++;
    }
  }

  string ans = "";
  int maxv = -1;
  for (auto ss : s) {
    if (maxv < max(ss.second, maxv)) {
      maxv = ss.second;
      // cout << ss.first << ss.second << endl;
      ans = ss.first;
    }
  }
  cout << ans << endl;
}
