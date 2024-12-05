#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int rec(int x, int y) {
  if (y == 0) return x;

  return rec(y, x % y);
}

int main() {
  int n, m;
  cin >> n >> m;

  cout << rec(n, m) << endl;
}