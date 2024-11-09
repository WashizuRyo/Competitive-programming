#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  vector<int> ans(26, 0);
  rep(i, s.size()) { ans[s[i] - 97]++; }

  int count = 0;
  rep(i, 26) {
    if (ans[i] >= 1) count++;
  }

  cout << count << endl;
}