#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int count = 0;
  rep(i, n - 1) {
    rep(k, m) {
      if (s[i][k] != s[i + 1][k]) {
        count++;
      }
    }
  }
  if (count == n - 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}