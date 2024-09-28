#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int n, a;
  cin >> n;
  rep(i, n) {
    rep(j, n) {
      cin >> a;
      if (a == 1) {
        cout << j + 1 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}