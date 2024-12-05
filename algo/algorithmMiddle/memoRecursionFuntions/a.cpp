#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<vector<int>> memo;
int rec(int n, int x, vector<int> &a) {
  if (n == 0) {
    if (x == 0) {
      return true;
    } else {
      return false;
    }
  }

  if (memo[n][x] != -1) return memo[n][x];

  if (rec(n - 1, x, a)) return memo[n][x] = 1;

  if (x >= a[n - 1] && rec(n - 1, x - a[n - 1], a)) return memo[n][x] = 1;

  return memo[n][x] = 0;
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  memo.assign(n + 1, vector<int>(x + 1, -1));

  cout << (rec(n, x, a) ? "Yes" : "No") << endl;
}