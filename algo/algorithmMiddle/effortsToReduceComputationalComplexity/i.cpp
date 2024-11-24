#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int func(int x) {
  if (x == 0) return 0;
  if (x == 1) return 1;

  return func(x - 1) + func(x - 2);
}

int main() {
  int n;
  cin >> n;
  int ans = func(n);
  cout << ans << endl;
}