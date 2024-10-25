#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

bool is_smallAlphabet(string s) {
  rep(i, s.size()) {
    if (char(s[i]) >= 97 && char(s[i]) <= 122) {
      return true;
    }
  }

  return false;
}

bool is_bigAlphabet(string s) {
  rep(i, s.size()) {
    if (char(s[i]) >= 65 && char(s[i]) <= 90) {
      return true;
    }
  }

  return false;
}

bool is_number(string s) {
  rep(i, s.size()) {
    if (char(s[i]) >= 48 && char(s[i]) <= 57) {
      return true;
    }
  }

  return false;
}

bool is_anotherString(string s) {
  rep(i, s.size()) {
    if (char(s[i]) == 33 || char(s[i]) == 64 || char(s[i]) == 63) {
      return true;
    }
  }

  return false;
}

int main() {
  string s;
  cin >> s;
  if (s.size() < 5 || s.size() > 64) {
    cout << "invalid" << endl;
    return 0;
  }

  int ans = 0;
  if (s.size() >= 10) ans++;
  if (is_smallAlphabet(s)) ans++;
  if (is_bigAlphabet(s)) ans++;
  if (is_number(s)) ans++;
  if (is_anotherString(s)) ans++;

  if (ans >= 4) {
    cout << "strong" << endl;
  } else if (ans == 3) {
    cout << "medium" << endl;
  } else if (ans <= 2) {
    cout << "weak" << endl;
  }