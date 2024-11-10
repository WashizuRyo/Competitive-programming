#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int count = 0;

  rep(i, s.size() - 1) {
    if (s[i] == s[i + 1]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}