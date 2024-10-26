#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    int ss = (s[i] - '0');
    if (ss - 3 < 0) {
      s[i] = (10 - abs(ss - 3)) + '0';
    } else {
      s[i] = (ss - 3) + '0';
    }
  }

  cout << s << endl;
}