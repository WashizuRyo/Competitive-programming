#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    if (s[i] == '2') {
      ans++;
    }
  }

  rep(i, ans) { cout << 2; }
  cout << endl;
}