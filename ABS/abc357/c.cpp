#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  ll grid = 1;
  rep(i, n) { grid *= 3; }
  for (int i = 1; i <= grid; i++) {
    for (int j = 1; j <= grid; j++) {
      if (i % (n + 1) == n && j % (n + 1) == n ||
          i >= ((grid / 3) + 1) && i <= (grid / 3) + 1 + ((grid / 3) - 1) && j >= ((grid / 3) + 1) && j <= (grid / 3) + 1 + ((grid / 3) - 1)) {
        cout << ".";
      } else {
        cout << "#";
      }
    }
    cout << endl;
  }
}