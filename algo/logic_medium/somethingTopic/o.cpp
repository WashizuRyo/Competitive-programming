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
  bool isOkLeft = true;
  for (int i = k; i >= 0; i--) {
    if (s[i] == '#') {
      isOkLeft = false;
    } else if (isOkLeft && s[i] == '.') {
      s[i] = 'o';
    }
  }
  bool isOkRight = true;
  for (int i = k; i < n; i++) {
    if (s[i] == '#') {
      isOkRight = false;
    } else if (isOkRight && s[i] == '.') {
      s[i] = 'o';
    }
  }
  cout << s << endl;
}