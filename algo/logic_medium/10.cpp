#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if ((char)(s[i]) < 97) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}