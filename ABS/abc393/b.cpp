#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] == 'B') {
      int a = i - 1, c = i + 1;
      while (a >= 0 && c < s.size()) {
        if (s[a] == 'A' && s[c] == 'C') cnt++;
        a--;
        c++;
      }
    }
  }

  cout << cnt << endl;
}