#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<long double> a(n);
  rep(i, n) cin >> a[i];
  long double r = a[1] / a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] != r * (a[i - 1])) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}