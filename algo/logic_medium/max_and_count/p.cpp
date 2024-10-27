#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), revenue(n);
  rep(i, n) cin >> a[i];

  revenue[0] = a[0];
  for (int i = 1; i < n; i++) {
    revenue[i] = revenue[i - 1] + a[i];
  }

  int ans = -1;
  int max = -10000000;
  rep(i, n) {
    if (max < revenue[i]) {
      max = revenue[i];
      ans = i;
    }
  }

  cout << max << endl;
}