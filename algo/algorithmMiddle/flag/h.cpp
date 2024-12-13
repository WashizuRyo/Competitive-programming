#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, m;
  cin >> a >> m;
  rep(i, 30) {
    // cout << (a & (1 << i)) << (m & (1 << i)) << endl;
    if ((a & (1 << i)) != (m & (1 << i))) {
      if ((m & (1 << i)) == 0) continue;
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}