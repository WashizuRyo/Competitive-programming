#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string s;
  cin >> s;

  for (char c = 'a'; c <= 'z'; c++) {
    if (s.find(c) == string::npos) {
      cout << c << endl;
      return 0;
    }
  }
}