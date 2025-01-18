#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  ll x;
  cin >> x;
  ll ans = 1;
  rep(i, 100) {
    ans *= i;
    if (ans == x) {
      cout << i << endl;
      return 0;
    }
  }
}