#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  vector<int> a = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  int q;
  cin >> q;

  rep(i, q) {
    int q1, q2, q3;
    cin >> q1;
    if (q1 == 0) {
      cin >> q2;
      cout << a[q2] << endl;
    } else {
      cin >> q2 >> q3;
      a[q2] = q3;
    }
  }
}