#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string t = s;
  s[n] = '0';
  bool iti = false;
  int count = 0, iticount = 0;
  int rk1 = 0, rk = 0, lk = 0;
  rep(i, n + 1) {
    if (s[i] == '1') {
      iticount++;
      iti = true;
    } else if (s[i] == '0' && iti == true) {
      count++;
      // cout << s[i] << "i" << i << endl;
      iti = false;
      if (count == k - 1) {
        rk1 = i - 1;
      } else if (count == k) {
        rk = i - 1;
        lk = rk - iticount + 1;
      }
      iticount = 0;
    }
  }
  rep(i, n) {
    if (1 <= i && i <= rk1)
      t[i] = s[i];
    else if (rk1 + 1 <= i && i <= rk1 + rk - lk + 1)
      t[i] = '1';
    else if (rk1 + rk - lk + 2 <= i && i <= rk)
      t[i] = '0';
    else if (rk + 1 <= i && i <= n)
      t[i] = s[i];
  }
  // cout << rk1 << rk << lk << endl;
  for (auto s : t)
    cout << s;
  cout << endl;
}
