#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, q, a, b;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  cin >> q;
  rep(i, q) {
    int aIndex = 0, bIndex = 0;
    cin >> a >> b;
    rep(i, n) {
      if (p[i] == a) {
        aIndex = i;
      } else if (p[i] == b) {
        bIndex = i;
      }
    }
    if (aIndex > bIndex)
      cout << p[bIndex] << endl;
    else
      cout << p[aIndex] << endl;
  }
}