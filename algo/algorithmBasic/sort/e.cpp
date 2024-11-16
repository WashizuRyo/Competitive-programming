#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<double> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  cout << fixed << setprecision(2);

  if (n % 2 == 0) {
    cout << ((a[n / 2 - 1] + a[n / 2]) / 2) << endl;
  } else {
    cout << a[(n - 1) / 2] << endl;
  }
}