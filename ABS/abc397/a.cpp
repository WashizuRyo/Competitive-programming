#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  float x;
  cin >> x;

  if (x >= 38.0) {
    cout << 1 << endl;
    return 0;
  } else if (x >= 37.5) {
    cout << 2 << endl;
    return 0;
  } else {
    cout << 3 << endl;
    return 0;
  }
}