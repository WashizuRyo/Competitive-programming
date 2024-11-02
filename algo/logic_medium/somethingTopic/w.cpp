#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) {
    cin >> s[i];
    cout << endl;
  }

  rep(i, n) {
    rep(k, m) {
      if (s[i][k] == 'o') {
        int nk = k;
        while (nk < m - 1 && s[i][nk + 1] != '#') {
          nk++;
          s[i][nk] = 'o';
        }
        nk = k;
        while (nk > 0 && s[i][nk - 1] != '#') {
          nk--;
          s[i][nk] = 'o';
        }
        int ni = i;
        while (ni < n - 1 && s[ni + 1][k] != '#') {
          ni++;
          s[ni][k] = 'o';
        }

        ni = i;
        while (ni > 0 && s[ni - 1][k] != '#') {
          ni--;
          s[ni][k] = 'o';
        }
        rep(i, n) {
          rep(j, m) { cout << s[i][j]; }
          cout << endl;
        }
        return 0;
      }
    }
  }
}