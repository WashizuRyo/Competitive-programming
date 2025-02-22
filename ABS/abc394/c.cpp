#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int w = 0;
  rep(i, s.size()) {
    if (s[i] == 'W') {
      w++;
      continue;
    }

    if (w > 0 && s[i] == 'A') {
      s[i - w] = 'A';
      for (int j = i; j > i - w; j--) {
        s[j] = 'C';
      }
    }

    w = 0;
  }

  cout << s << endl;
}