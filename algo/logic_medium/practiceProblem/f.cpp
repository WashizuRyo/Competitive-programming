#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  set<int> wins;
  int win = 0;
  rep(i, n) {
    if (s[i] == 'o') {
      win++;
    } else {
      win = 0;
    }
    wins.insert(win);
  }

  cout << *wins.rbegin() << endl;
}