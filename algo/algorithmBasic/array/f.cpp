#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, ans = 0;
  cin >> h >> w;
  rep(i, h) {
    string s;
    cin >> s;
    rep(i, w) {
      if (s[i] == 'o') ans++;
    }
  }

  cout << ans << endl;
}