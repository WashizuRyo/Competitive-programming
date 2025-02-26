#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int w, b;
  cin >> w >> b;

  string s = "wbwbwwbwbwbw";

  rep(i, s.size()) {
    int cw = 0, cb = 0;
    for (int j = 0; j < w + b; j++) {
      if (s[(i + j) % s.size()] == 'w')
        cw++;
      else
        cb++;
      if (cw == w && cb == b) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}