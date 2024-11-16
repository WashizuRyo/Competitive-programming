#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int m, n;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> x(m);

  rep(i, n) cin >> a[i];
  rep(i, m) cin >> x[i];

  sort(a.begin(), a.end());
  rep(i, m) { cout << a[x[i]] << endl; }
}