#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  char c;
  cin >> s;
  cin >> c;

  bool flag = false;
  rep(i, s.size()) {
    if (s[i] == c) flag = true;
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}