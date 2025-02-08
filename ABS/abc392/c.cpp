#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  vector<int> z(n);

  rep(i, n) {
    int k;
    cin >> k;
    p[i] = --k;
    // cin >> p[i];
  }
  rep(i, n) {
    int k;
    cin >> k;
    q[i] = --k;
    // cin >> q[i];
  }

  rep(i, n) { cout << q[p[q[i]]] << " "; }
}