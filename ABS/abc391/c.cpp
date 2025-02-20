#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> count(1, n);
  rep(i, q) {
    int type, p, h;
    cin >> type;
    if (type == 1) {
      cin >> p >> h;
      count[h - 1]++;

    } else {
    }
  }
}