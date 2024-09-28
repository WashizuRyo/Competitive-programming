#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
  int x, y;
  cin >> x >> y;
  if (x < y) {
    if (y - x <= 2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (x - y <= 3) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}