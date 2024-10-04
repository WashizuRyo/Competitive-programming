#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

  bool x, y, z;
  x = max(a, g) < min(d, j);
  y = max(b, h) < min(e, k);
  z = max(c, i) < min(f, l);

  if (x && y && z)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}