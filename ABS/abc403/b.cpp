#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string t, u;
  cin >> t >> u;

  for (int i = 0; i < t.size(); i++) {
    bool ok = true;
    rep(j, u.size()) {
      if (t[i + j] != '?' && t[i + j] != u[j]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}