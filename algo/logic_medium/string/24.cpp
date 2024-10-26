#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  rep(i, n - 1) {
    char first = s[i].back();
    char second = s[i + 1][0];

    if (first != second) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}