#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  vector<string> s;
  rep(i, h) { cin >> s[i]; }

  lwAnddh(c, h, s, c);
  lwAnddh(r, h, s, c);
  rwAnduh(c, h, s, c);
  rwAnduh(r, h, s, c);
  while (r >= 0 && c <= w) {
    int countx = 0;
    if (s[--r][++c] == 'x')
      countx++;
    else if (s[--r][++c] == 'o' && countx > 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  while (r <= h &&)
}

void rwAnduh(int r, int h, vector<string> s, int c) {
  int countx = 0;
  for (int l = r + 1; l <= h; l++) {
    if (s[l][c] == 'x')
      countx++;
    else if (countx > 0 && s[l][c] == 'o') {
      cout << "Yes" << endl;
      return;
    }
  }
}

void lwAnddh(int r, int h, vector<string> s, int c) {
  int countx = 0;
  for (int l = r - 1; l >= 0; l--) {
    if (s[l][c] == 'x')
      countx++;
    else if (countx > 0 && s[l][c] == 'o') {
      cout << "Yes" << endl;
      return;
    }
  }
}