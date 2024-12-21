#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  vector<int> a(n);
  cin >> n;
  rep(i, n) { cin >> a[i]; }

  for (int i = 1; i < n; i++) {
    int tmp = 0;
    int v = a[i];
    int j = i - 1;
    while (i - 1 >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;
    rep(k, n) { cout << a[k] << " "; }
    cout << endl;
  }
}