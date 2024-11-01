#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s1, s2, s3, s4, s5;
  cin >> s1 >> s2 >> s3 >> s4 >> s5;
  vector ss = {s1, s2, s3, s4, s5};
  rep(i, 5) rep(j, 5) {
    if (ss[i][j] == 'x') {
      ss[i][j] = 'o';
    } else
      continue;

    bool isWidth = false;
    bool iscross1 = false;
    bool iscross2 = false;
    bool isHeight = false;

    rep(i, 5) {
      rep(j, 5) {
        if (ss[i][j] != 'o') break;
        if (j == 4) {
          isWidth = true;
          break;
        }
      }
    }

    rep(i, 5) {
      rep(j, 5) {
        if (ss[j][i] != 'o') break;
        if (j == 4) {
          isHeight = true;
          break;
        }
      }
    }

    rep(i, 5) {
      if (ss[i][i] != 'o') break;
      if (i == 4) {
        iscross1 = true;
      }
    }

    rep(i, 5) {
      if (ss[i][4 - i] != 'o') break;
      if (i == 4) {
        iscross2 = true;
      }
    }

    if (isWidth || isHeight || iscross1 || iscross2) {
      cout << "Yes" << endl;
      return 0;
    } else {
      ss[i][j] = 'x';
    }
  }

  cout << "No" << endl;
  return 0;
}