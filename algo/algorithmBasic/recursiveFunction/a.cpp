#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int func(int x) {
  if (x == 0) return 0;

  return func(x - 1) + x;
}

int main() {
  int n;
  cin >> n;
  cout << func(n) << endl;
}