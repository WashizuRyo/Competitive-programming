#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

string func(string x, int n) {
  if (n == 0) return string(1, x[0]);

  string previous = func(x, n - 1);
  return previous + x[n] + previous;
}

int main() {
  int n;
  string x;
  cin >> n;
  cin >> x;
  cout << func(x, n - 1) << endl;
}