#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a > 0) ans++;
  }

  cout << ans << endl;
}