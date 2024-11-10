#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  set<char> ans;

  rep(i, s.size()) { ans.insert(s[i]); }

  cout << 26 - ans.size() << endl;
}