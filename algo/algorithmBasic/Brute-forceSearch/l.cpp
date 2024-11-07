#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = -1;
  for (int i = 1; i <= max(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      ans = max(ans, i);
    }
  }

  cout << ans << endl;
}