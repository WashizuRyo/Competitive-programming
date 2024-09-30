#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, eat1 = 0, eat2 = 0;
  long long x, y, salt = 0, sweet1 = 0;
  cin >> n >> x >> y;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());
  rep(i, n) {
    salt += a[i];
    // sweet += b[i];
    if (salt > x) {
      eat1 = i + 1;
      break;
    }
  }
  rep(i, n) {
    // salt += a[i];
    sweet1 += b[i];
    if (sweet1 > y) {
      eat2 = i + 1;
      break;
    }
  }
  int ans = 0;
  if (eat1 == 0) eat1 = n;
  if (eat2 == 0) eat2 = n;
  ans = min(eat1, eat2);
  cout << ans << endl;
}