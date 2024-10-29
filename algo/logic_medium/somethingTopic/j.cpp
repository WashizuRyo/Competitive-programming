#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));

  rep(i, n) {
    rep(j, n) { cin >> a[i][j]; }
  }

  rep(i, n) {
    rep(j, n) {
      if (a[i][j] >= 6) {
        cout << "#";
      } else {
        cout << ".";
      }
    }

    cout << endl;
  }
}