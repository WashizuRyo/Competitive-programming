#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, ans = 1e9;
  int test = 0;
  cin >> n;
  vector<int> k(n);
  rep(i, n) cin >> k[i];
  for (int bit = 0; bit < (1 << n); ++bit) {
    int sumA = 0, sumB = 0;
    rep(i, n) {
      if ((bit >> i) & 1)
        sumA += k[i];
      else
        sumB += k[i];
    }
    int now = max(sumA, sumB);
    ans = min(ans, now);
  }

  cout << ans << endl;
}