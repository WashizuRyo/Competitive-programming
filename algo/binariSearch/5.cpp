#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> x(k);
  rep(i, n) cin >> a[i];
  rep(i, k) cin >> x[i];

  rep(i, n) {
    int ok = -1;
    int ng = k;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (x[mid] <= a[i]) {
        ok = mid;
      } else {
        ng = mid;
      }
    }

    cout << ok + 1 << endl;
  }
}