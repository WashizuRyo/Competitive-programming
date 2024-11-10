#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  map<string, int> menu;
  vector<string> x;

  rep(i, n) {
    string s;
    int c;
    cin >> s >> c;
    menu.emplace(s, c);
  }

  int ans = 0;
  rep(i, m) {
    string x;
    cin >> x;
    ans += menu[x];
  }

  cout << ans << endl;
}