#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int maxv = -1;
  rep(i, n) { maxv = max(maxv, a[i]); }
  int x = maxv + 1;

  vector<int> num(x, 0);
  vector<int> acc(x, 0);
  rep(i, n) { num[a[i]]++; }
  rep(i, x) {
    if (i == 0)
      acc[i] = num[i];
    else {
      acc[i] = acc[i - 1] + num[i];
    }
  }

  vector<int> b(n);
  rep(i, n) {
    acc[a[i]]--;
    b[acc[a[i]]] = a[i];
  }

  rep(i, n) { cout << b[i] << " "; }

  cout << endl;
}