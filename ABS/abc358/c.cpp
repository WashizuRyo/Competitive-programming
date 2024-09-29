#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  int min_shop = n;
  for (int bit = 0; bit < (1 << n); bit++) {
    bitset<10> taste_covered;
    int shop_count = 0;
    rep(i, n) {
      if (bit & (1 << i)) {
        shop_count++;
        rep(j, m) {
          if (s[i][j] == 'o') taste_covered.set(j);
        }
      }
    }
    if (taste_covered.count() == m) {
      min_shop = min(min_shop, shop_count);
    }
  }
  cout << min_shop << endl;
  return 0;
}