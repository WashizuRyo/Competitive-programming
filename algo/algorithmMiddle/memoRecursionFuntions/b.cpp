#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

vector<int> memo;

int rec(int x) {
  if (x < 3) return 1;

  if (memo[x] != 0) return memo[x];

  return memo[x] = (rec(x - 1) + rec(x - 2) + rec(x - 3)) % 1000000;
}

int main() {
  int n;
  cin >> n;
  memo.resize(n + 1, 0);
  cout << (rec(n)) << endl;
}