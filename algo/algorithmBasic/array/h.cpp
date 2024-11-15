#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  rep(i, h) {
    rep(j, w) {
      if (x - 1 <= i && i <= x + 1 && y - 1 <= j && j <= y + 1) {
        cout << s[i][j];
      }
    }
    cout << endl;
  }
}