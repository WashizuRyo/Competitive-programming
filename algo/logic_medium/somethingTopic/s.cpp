#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(5, vector<int>(5));
  rep(i, 5) {
    rep(j, 5) { cin >> a[i][j]; }
    cout << endl;
  }
  vector<int> p(n);
  rep(i, n) { cin >> p[i]; }

  rep(k, n) {
    rep(i, 5) {
      rep(j, 5) {
        if (a[i][j] == p[k])
          a[i][j] = 0;
        else
          continue;
        bool isWidth = false;

        bool isHeight = false;
        rep(i, 5) {
          rep(j, 5) {
            if (a[i][j] != 0) break;
            if (j == 4) {
              isWidth = true;
              break;
            }
          }
        }
        rep(i, 5) {
          rep(j, 5) {
            if (a[j][i] != 0) break;
            if (j == 4) {
              isHeight = true;
              break;
            }
          }
        }

        bool iscross1 = false;
        bool iscross2 = false;
        rep(i, 5) {
          if (a[i][i] != 0) break;
          if (i == 4) {
            iscross1 = true;
          }
        }

        rep(i, 5) {
          if (a[i][4 - i] != 0) break;
          if (i == 4) {
            iscross2 = true;
          }
        }
        if (isWidth || isHeight || iscross1 || iscross2) {
          cout << k << endl;
          // cout << isWidth << isHeight << iscross1 << iscross2 << endl;
          return 0;
        }
      }
    }
  }

  cout << "-1" << endl;
}