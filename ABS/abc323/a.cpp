#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); i += 2)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if ((s[i] - '0') % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}