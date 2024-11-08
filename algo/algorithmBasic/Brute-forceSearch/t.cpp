#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int count_divisor(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
  }

  return count;
}

int main() {
  int n, k, ans = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    if (count_divisor(i) == k) {
      ans++;
    }
  }

  cout << ans << endl;
}