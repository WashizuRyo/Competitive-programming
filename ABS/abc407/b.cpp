#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  set<P> ans;

  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i + j >= a) ans.insert({i, j});
      if (abs(i - j) >= b) ans.insert({i, j});
    }
  }

  double r = (double)ans.size() / 36;
  cout << fixed << setprecision(11) << r << endl;
}