#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int r, x;
  cin >> r >> x;

  if (x == 1 && 1600 <= r && r <= 2999) {
    cout << "Yes" << endl;
    return 0;
  } else if (x == 2 && 1200 <= r && r <= 2399) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
    return 0;
  }
}