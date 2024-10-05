#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;
  if (s == t) {
    cout << "0" << endl;
    return 0;
  }
  rep(i, min(s.size(), t.size())) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return 0;
    }
    if (i == min(s.size(), t.size()) - 1) {
      cout << i + 2 << endl;
    }
  }
}