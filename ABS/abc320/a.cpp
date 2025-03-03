#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  ll ans = pow(a, b) + pow(b, a);

  cout << ans << endl;
}