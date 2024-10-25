#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool is_sameNumber(string s) {
  rep(i, s.size() - 1) {
    if (s[i] != s[i + 1]) {
      return false;
    }
  }

  return true;
}

bool is_increment(string s) {
  rep(i, s.size() - 1) {
    if ((s[i + 1] - s[i]) != 1) {
      return false;
    }
  }

  return true;
}

bool is_decrement(string s) {
  rep(i, s.size() - 1) {
    if ((s[i] - s[i + 1]) != 1) {
      return false;
    }
  }

  return true;
}

int main() {
  string s;
  cin >> s;

  if (is_sameNumber(s) || is_increment(s) || is_decrement(s)) {
    cout << "dangerous" << endl;
  } else {
    cout << "safe" << endl;
  }
}