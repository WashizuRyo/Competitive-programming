#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int m;
  string n;
  cin >> m >> n;

  int pow2 = 1;
  int ans = 0;
  for (int i = n.size() - 1; i >= 0; i--) {
    int d = n[i] - '0';
    ans += pow2 * d;
    pow2 *= m;
  }

  cout << ans << endl;
}