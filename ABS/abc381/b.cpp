#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int t = s.size();
  if (t % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 1; i <= t / 2; i++) {
    if (s[2 * i - 2] != s[2 * i - 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, t) {
    int count = 0;
    rep(j, t) {
      if (s[i] == s[j]) count++;
    }
    if (count != 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}