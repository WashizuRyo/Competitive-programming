#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int k;
  string s, t;
  cin >> k >> s >> t;
  if (s == t) {
    cout << "Yes" << endl;
    return 0;
  }
  if (s.length() == t.length()) {
    int count = 0;
    rep(i, s.length()) {
      if (s[i] != t[i]) {
        for (int j = i + 1; j <= s.length(); j++) {
          if (s[j] != t[j]) {
            cout << "No" << endl;
            return 0;
          }
        }
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  if (s.length() == t.length() - 1) {
    int count = 0;
    rep(i, t.length()) {
      if (s[i] != t[i]) {
        for (int j = i + 1; j <= s.length(); j++) {
          if (s[j - 1] != t[j]) {
            cout << "No" << endl;
            return 0;
          }
        }
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  if (s.length() - 1 == t.length()) {
    int count = 0;
    rep(i, s.length()) {
      if (s[i] != t[i]) {
        for (int j = i + 1; j <= s.length(); j++) {
          if (s[j] != t[j - 1]) {
            cout << "No" << endl;
            return 0;
          }
        }
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}