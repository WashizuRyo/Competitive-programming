#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int max = 0;
  rep(i, n) {
    if (max < a[i]) {
      max = a[i];
    }
  }

  int max2 = 0;
  rep(i, n) {
    if (max2 < a[i] && a[i] != max) {
      max2 = a[i];
    }
  }

  cout << max2 << endl;
}