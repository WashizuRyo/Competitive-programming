#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> k(n);
  rep(i, n) cin >> k[i];
  int abs = 0;
  for (int bit = 0; bit < (1 << k.size()); ++bit) {
    int sum = 0;
    rep(i, k.size()) {
      if (bit & (1 << i)) {
        sum += k[i];
      }
    }
    abs = max(abs, sum - abs);
  }

  cout << abs << endl;
}