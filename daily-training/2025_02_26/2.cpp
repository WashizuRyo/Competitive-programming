#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n + n + 1; i++) {
    if ((i + 1) % 2 == 0) {
      cout << 0;
    } else {
      cout << 1;
    }
  }

  cout << endl;
}