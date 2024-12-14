#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  vector<int> x(8);
  rep(i, 8) { cin >> x[i]; }

  rep(i, 8) {
    rep(j, 8) {
      int x0 = x[i] & (1 << (15 - 2 * j));
      int x1 = x[i] & (1 << (14 - 2 * j));
      if (!x0 && !x1)
        cout << ".";
      else if (!x0 && x1)
        cout << "o";
      else if (x0 && !x1)
        cout << "x";
    }

    cout << endl;
  }
}