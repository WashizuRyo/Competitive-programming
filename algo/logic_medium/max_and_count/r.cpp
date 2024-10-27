#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> hourCount(24, 0);

  rep(i, n) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j < r; j++) {
      hourCount[j]++;
    }
  }

  rep(i, 24) {
    if (hourCount[i] > k) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}