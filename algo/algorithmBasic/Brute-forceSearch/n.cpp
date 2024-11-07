#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  char taget = '0';
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      ans++;
    }
  }

  cout << ans << endl;
}