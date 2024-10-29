#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), p(m);
  rep(i, n) cin >> a[i];
  rep(j, m) cin >> p[j];
  int now = 0;
  rep(i, m) {
    now += p[i];
    now += a[now];
  }

  cout << now << endl;
}