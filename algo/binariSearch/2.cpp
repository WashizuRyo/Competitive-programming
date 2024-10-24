#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  int ans = 0;
  rep(i, m) {
    int ok = -1;
    int ng = n;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (a[mid] <= b[i]) {
        ok = mid;
      } else {
        ng = mid;
      }
    }
    cout << ng << endl;
  }
}