#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

ll func(int n) {
  if (n < 3) return n;

  return func(n - 2) * n;
}

int main() {
  int n;
  cin >> n;
  cout << func(n) << endl;
}