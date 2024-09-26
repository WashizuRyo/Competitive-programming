#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, t, p, cnt;
  cin >> n >> t >> p;
  vector<int> L(100);
  rep(i, n) cin >> L[i];
  rep(i, t) {
    cnt = 0;
    rep(j, n) {
      if (L[j] + i >= t) cnt++;
    }
    if (cnt >= p) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "0" << endl;
}

// 1 2 3 6 11 count = 1 nokori = 3 - 1 = 2 L.size() = 5