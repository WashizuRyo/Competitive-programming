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
  for (int i = 2; i < n; i++) {
    if (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C') {
      cout << i - 1 << endl;
      return 0;
    }
  }

  cout << "-1" << endl;
  return 0;
}