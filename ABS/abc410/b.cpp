#include <algorithm>
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> box(n + 1, 0);
  rep(qi, q) {
    int x;
    cin >> x;

    if (x == 0) {
      int l = 100100100;
      for (int i = 1; i <= n; i++)
        l = min(l, box[i]);
      for (int i = 1; i <= n; i++) {
        if (l == box[i]) {
          x = i;
          break;
        }
      }
    }

    cout << x << " ";
    box[x]++;
  }
}