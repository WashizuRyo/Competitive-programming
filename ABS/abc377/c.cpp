#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m) cin >> a[i] >> b[i];
  vector<vector<bool>> arr(n, vector<bool>(n, false));

  rep(i, n) {
    if (b[i] == 1 && b[i] > 2 && b[i] <= n - 2) {
      arr[a[i] - 2][b[i] + 1] = true;
      arr[a[i] - 1][b[i] + 2] = true;
      arr[a[i] + 1][b[i] + 2] = true;
      arr[a[i] + 1][b[i] + 1] = true;
    }
  }
}