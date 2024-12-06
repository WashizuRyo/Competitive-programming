#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int f;
  cin >> f;

  int ans = 1;
  rep(i, f) { ans *= 2; }

  cout << ans << endl;
}