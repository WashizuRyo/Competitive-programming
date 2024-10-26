#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size() - 1) {
    int ss = (s[i] - '0');
    if (i % 2 == 0) {
      ans += ss;
    } else {
      ans += ss * 2;
    }
  }

  if (ans % 10 == (s[s.size() - 1] - '0')) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}