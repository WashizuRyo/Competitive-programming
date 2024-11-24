#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<ll> memo;

ll func(ll n) {
  if (memo[n] != -1) return memo[n];

  if (n == 0) return memo[n] = 0;
  if (n == 1) return memo[n] = 1;

  return memo[n] = func(n - 1) + func(n - 2);
}

int main() {
  ll n;
  cin >> n;

  memo.resize(n + 1, -1);

  cout << func(n) << endl;
}