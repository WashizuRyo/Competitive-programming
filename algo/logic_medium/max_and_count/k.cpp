#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int q;
  cin >> q;
  vector<int> d(q);
  rep(i, q) cin >> d[i];
  rep(i, q - 1) {
    for (int j = i + 1; j < q; j++) {
      if (d[i] == d[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}