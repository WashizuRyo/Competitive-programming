#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  string n;
  cin >> n;
  int ans = 0;
  int pow2 = 1;
  for (int i = n.size() - 1; i >= 0; i--) {
    int d = n[i] - '0';
    ans += (pow2 * d);
    pow2 *= 2;
  }

  cout << ans << endl;
}