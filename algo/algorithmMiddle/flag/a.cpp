#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> f(n);
  rep(i, n) cin >> f[i];

  int sum = 0;
  rep(i, n) {
    int ans = 1;
    for (int j = 0; j < f[i]; j++) {
      ans *= 2;
    }

    sum += ans;
  }

  cout << sum << endl;
}