#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a >= c) {
    if (a == c && b < d) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}