#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> s(n, vector<char>(n, '?'));

  rep(i, n) {
    int j = n + 1 - i - 2;
    if (i <= j) {
      if ((i + 1) % 2 == 0) {
        for (int k = i; k <= j; k++) {
          for (int m = i; m <= j; m++) {
            s[k][m] = '.';
          }
        }
      } else {
        for (int k = i; k <= j; k++) {
          for (int m = i; m <= j; m++) {
            s[k][m] = '#';
          }
        }
      }
    }
  }

  rep(i, n) {
    rep(j, n) { cout << s[i][j]; }

    cout << endl;
  }
}