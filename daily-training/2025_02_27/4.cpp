#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<char>> grid(h, vector<char>(w, '.'));

  int i = 0, j = 0, dir = 0;
  vector<int> di = {-1, 0, 1, 0};
  vector<int> dj = {0, 1, 0, -1};

  rep(step, n) {
    if (grid[i][j] == '.') {
      grid[i][j] = '#';
      dir = (dir + 1) % 4;
    } else {
      grid[i][j] = '.';
      dir = (dir + 3) % 4;
    }

    i = (i + di[dir] + h) % h;
    j = (j + dj[dir] + w) % w;
  }

  rep(i, h) {
    rep(j, w) { cout << grid[i][j]; }
    cout << endl;
  }
}