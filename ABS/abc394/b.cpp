#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  set<pair<int, string>> ans;

  rep(i, n) {
    string s;
    cin >> s;
    ans.insert({s.size(), s});
  }

  for (const auto &p : ans) {
    cout << p.second;
  }

  cout << endl;
}