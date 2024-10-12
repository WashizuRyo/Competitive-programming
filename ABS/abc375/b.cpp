#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  double count = 0;
  cin >> n;
  double x, y, xz = 0, yz = 0;
  rep(i, n) {
    cin >> x >> y;
    count += sqrt((xz - x) * (xz - x) + (yz - y) * (yz - y));
    xz = x;
    yz = y;
  }
  count += sqrt(xz * xz + yz * yz);
  cout << setprecision(20) << count << endl;
}