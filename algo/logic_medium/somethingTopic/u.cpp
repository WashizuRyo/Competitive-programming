#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int x = 0;
  int y = 0;
  rep(i, n) {
    if (s[i] == 'R') {
      x++;
    } else if (s[i] == 'L') {
      x--;
    } else if (s[i] == 'U') {
      y++;
    } else if (s[i] == 'D') {
      y--;
    }
  }

  cout << x << " " << y << endl;
}