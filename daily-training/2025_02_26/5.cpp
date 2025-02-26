#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> h(n);

  rep(i, n) cin >> h[i];
  ll t = 0;
  rep(i, n) {
    int num = h[i] / 5;
    t += num * 3;
    h[i] -= num * 5;
    while (h[i] > 0) {
      t++;
      if (t % 3 == 0) {
        h[i] -= 3;
      } else {
        h[i]--;
      }
    }
  }

  cout << t << endl;
}