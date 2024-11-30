#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }

  vector<int> t(n);

  t[0] = 0;
  t[1] = a[1];

  for (int i = 2; i < n; ++i) {
    t[i] = min(t[i - 1] + a[i], t[i - 2] + a[i] * 2);
  }

  cout << t[n - 1] << endl;
}