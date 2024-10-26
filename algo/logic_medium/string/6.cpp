#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  if (s.size() == 4) {
    rep(i, s.size()) {
      if (static_cast<char>(s[i]) < 48 || static_cast<char>(s[i]) > 57) {
        cout << "invalid" << endl;
        return 0;
      }
    }

    cout << "valid" << endl;
    return 0;
  } else {
    cout << "invalid" << endl;
  }
}