#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, d;
  string s;
  cin >> n >> d;
  cin >> s;

  for (int i = n - 1; i >= 0; --i) {
    if (d == 0) break;
    if (s[i] == '@') {
      d--;
      s[i] = '.';
    }
  }
  cout << s << endl;
  return 0;
}