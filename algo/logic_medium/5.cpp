#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  rep(i, n) {
    if (static_cast<char>(s[i]) >= 65 && static_cast<char>(s[i]) <= 122) {
      if (static_cast<char>(s[i]) >= 97) {
        cout << "lowercase" << endl;
      } else {
        cout << "uppercase" << endl;
      }
    } else if (static_cast<char>(s[i]) >= 48 && static_cast<char>(s[i]) <= 57) {
      cout << "digit" << endl;
    } else {
      cout << s[i] << endl;
    }
  }
}