#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int func(int b, int a) {
  if (b == a) return a;

  return func(b - 1, a) + b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << func(b, a) << endl;
}