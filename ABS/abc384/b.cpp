#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, r;
  cin >> n >> r;
  rep(i, n) {
    int d, a;
    cin >> d >> a;
    if (d == 1) {
      if (r >= 1600 && r <= 2799) {
        r += a;
      }
    } else {
      if (r >= 1200 && r <= 2399) {
        r += a;
      }
    }
  }

  cout << r << endl;
}