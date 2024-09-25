#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  string s;
  string news = "";
  cin >> s;
  rep(i, s.size()) {
    if (s[i] != '.') {
      news += s[i];
    }
  }
  cout << news << endl;
}