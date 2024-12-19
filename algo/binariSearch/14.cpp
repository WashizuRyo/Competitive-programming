#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;

  ll count = 0;
  rep(i, n) { count += min(n, k / (i + 1)); }

  cout << count << endl;
}