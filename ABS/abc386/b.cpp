#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int zeroc = 0, res = 0;
  for (auto c : s) {
    if (c - '0' == 0) {
      zeroc++;
    } else {
      res += (zeroc + 1) / 2;
      zeroc = 0;
      res++;
    }
  }
  res += (zeroc + 1) / 2;

  cout << res << endl;
}