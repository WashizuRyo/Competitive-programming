#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> x(n);
  vector<int> s(n + 1, 0);
  rep(i, n) {
    cin >> x[i];
    s[i + 1] = s[i] + x[i];
  }
  int ans = -1;
  int sum = 0;
  int index = -1;
  rep(i, n - d + 1) {
    sum = s[d + i] - s[i];
    if (sum >= ans) {
      index = i;
      ans = max(sum, ans);
      // cout << index << endl;
      // cout << ans << endl;
    }
  }
  cout << index << "~" << index + d - 1 << endl;
}