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

  rep(i, n - 1) {
    int minv = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[minv]) {
        minv = j;
      }
    }
    swap(a[i], a[minv]);
    rep(k, n) { cout << a[k] << " "; }
    cout << endl;
  }
}