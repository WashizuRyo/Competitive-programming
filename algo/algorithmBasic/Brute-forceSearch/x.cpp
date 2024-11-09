#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;

  cin >> n;
  cin >> s;

  int ans = 0;

  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) ans++;
    }
  }

  cout << ans << endl;
}