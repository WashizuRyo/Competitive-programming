#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  int ans = 0;
  int maxVal = -1;
  rep(i, n) {
    cin >> a[i];
    int maxs = maxVal;
    maxVal = max(a[i], maxVal);
    if (maxs != maxVal) {
      ans = i;
    }
  }

  cout << ans << endl;
}