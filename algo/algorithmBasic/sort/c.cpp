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
  for (int i = 1; i < n; i++) {
    int pos = i;
    while (pos != 0 && a[pos - 1] > a[pos]) {
      swap(a[pos - 1], a[pos]);
      pos--;
    }
    rep(i, n) cout << a[i] << " ";
    cout << endl;
  }
}