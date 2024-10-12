#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  // n x n の2次元ベクターを作成
  vector<vector<char>> a(n, vector<char>(n));

  // 値を入力
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  rep(i, n / 2) {
    for (int x = i; x < n + 1 - i; x++) {
      for (int y = i; y < n + 1 - i; y++) {
        if (x < n && y < n && n - x < n) {
          a[y][n - x] = a[x][y];
        }
      }
    }
  }
  cout << "-----------" << endl;
  rep(i, n) {
    rep(j, n) { cout << a[i][j]; }
    cout << endl;
  }
}