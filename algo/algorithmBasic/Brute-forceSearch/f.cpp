#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int ans = 2e3;
  rep(i, n) {
    int a;
    cin >> a;
    ans = min(ans, a);
  }

  cout << ans << endl;
}