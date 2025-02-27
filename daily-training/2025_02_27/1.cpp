#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;

  if (s[0] != s[1]) ans++;
  if (s[1] != s[2]) ans++;
  if (s[0] != s[2]) ans++;

  if (ans == 0) {
    cout << 1 << endl;
    return 0;
  }
  if (ans == 1) {
    cout << 2 << endl;
    return 0;
  }
  if (ans == 2) {
    cout << 3 << endl;
    return 0;
  }
  if (ans == 3) {
    cout << 6 << endl;
    return 0;
  }
}