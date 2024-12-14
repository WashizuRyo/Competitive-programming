#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  char c1, c2;
  string s;
  cin >> n >> c1 >> c2;
  cin >> s;

  rep(i, s.size()) {
    if (s[i] != c1) s[i] = c2;
  }

  cout << s << endl;
}